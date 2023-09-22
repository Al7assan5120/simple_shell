#include "main.h"
/**
 * _is_exist - function that reads from input stream
 * @program_name: entered program name
 * Return: path of program
 */
char *_is_exist(char *program_name)
{
	int i, itr = 0, path_tok_no;
	char *x, *s, *z, *d = ":";
	struct stat st;
	char **v;

	z = _getenv("PATH");
	v = tok_path(z);
	path_tok_no = countStringOccurrences(z, d);
	for (i = 0; v[i] != NULL; i++)
	{
		x = malloc((_strlen(v[i]) + 2) * sizeof(char));
		if (x == NULL)
			return (NULL);
		_strcpy(x, v[i]);
		_strcat(x, "/");
		s = malloc((_strlen(x) + _strlen(program_name) + 1) * sizeof(char));
		if (s == NULL)
			return (NULL);
		_strcpy(s, x);
		_strcat(s, program_name);
		if (stat(s, &st) == 0)
		{
			_free(2, z, x);
			break; }
		else if (stat(s, &st) == -1 && itr >= path_tok_no)
		{
			perror("stat");
			for (i = 0; v[i] != NULL; i++)
				free(v[i]);
			_free(5, program_name, v, s, x, z);
			exit(127); }
		else
		{
			_free(2, s, x);
			itr++; }}
	for (i = 0; v[i] != NULL; i++)
		free(v[i]);
	free(v);
	return (s);
}
