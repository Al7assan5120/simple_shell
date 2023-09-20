#include "main.h"
/**
 * execute - function that executes a command line
 * @f: command
 * @x: check for path
 * Return: pointer to environment variable array
 */
void execute(char **f, int x)
{
	char *env[] = {NULL};
	int pid, i;
	char *path = NULL;

	if (x == 0)
	{
		path = _is_exist(f[0]);
		if (path == NULL)
			perror("_is_exist returned NULL"); }
	else if (x == 1)
		path = f[0];
	pid = fork();
	if (pid == -1)
		exit(EXIT_FAILURE);
	else if (pid == 0)
	{
		if (path != NULL && f != NULL)
		{
			execve(path, f, env);
			perror("execve"); }
		else
		{
			perror("Null pointer passed to execve");
			exit(EXIT_FAILURE); }
	}
	else
		wait(NULL);
	if (path != f[0] && path != NULL)
		free(path);
	for (i = 0; f[i] != NULL; i++)
	{
		free(f[i]);
		f[i] = NULL; }
	free(f);
	f = NULL;
}
