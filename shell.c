#include "main.h"
/**
 * main - entery level
 * @ac: ffs
 * @av: sdfasf
 * Return: int
 */
int main(__attribute__((unused)) int ac,  __attribute__((unused)) char *av[])
{
	char *lineptr = NULL, *d = " \"\n\t";
	size_t len = 0;
	ssize_t x;
	char **f;
	int y, count, l, mode = shell_mode(ac);

	if (mode == 3)
		non_interact_file(av);
	if (mode == 2)
		non_interact_pipe();
	while (mode == 1)
	{
		y = write(STDOUT_FILENO, "#cisfun$ ", 10);
		if (y == -1)
			return (-1);
		x = _getline(&lineptr, &len, stdin);
		if (x == EOF)
		{
			write(1, "\n", 1);
			free(lineptr);
			exit(0); }
		else if (_strcmp(lineptr, "\n") == 0 || _strcmp(lineptr, "	\n") == 0)
			continue;
		for (count = 0; lineptr[count] != '\0'; count++)
		{
			if (lineptr[count] != ' ')
				break;
		}
		if ((count + 1) == _strlen(lineptr))
			continue;
		f = get_token(lineptr, d);
		l = is_builtin(f);
		if (l == 1)
			exit(EXIT_SUCCESS);
		execute(f);
	}
	return (0);
}
