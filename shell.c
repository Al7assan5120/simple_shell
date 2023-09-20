#include "main.h"
/**
 * main - entery level
 * @ac: ffs
 * @av: sdfasf
 * Return: int
 */
int main(__attribute__((unused)) int ac,  __attribute__((unused)) char *av[])
{
	char *lineptr = NULL, *d = " \n\t";
	size_t len = 0;
	ssize_t x;
	char **f;
	int z, y;
	int mode = shell_mode(ac);

	if (mode == 3)
	{
		non_interact_file(av); }
	if (mode == 2)
	{
		non_interact_pipe(); }
	while (mode == 1)
	{
		y = write(STDOUT_FILENO, "#cisfun$ ", 10);
		if (y == -1)
			return (-1);
		x = getline(&lineptr, &len, stdin);
		if (x == EOF)
		{
			write(1, "\n", 1);
			free(lineptr);
			exit(0); }
		if (x == -1)
		{
			free(lineptr);
			exit(EOF); }
		else if (_strcmp(lineptr, "\n") == 0)
			continue;
		if (_strchr(lineptr, '/') != NULL)
			z = 1;
		else
			z = 0;
		f = get_token(lineptr, d);
		is_builtin(f);
		execute(f, z);
	}
	return (0);
}
