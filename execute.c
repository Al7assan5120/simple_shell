#include "main.h"
/**
 * execute - function that executes a command line
 * @f: command
 * Return: pointer to environment variable array
 */
int execute(char **f)
{
	char *env[] = {NULL};
	int pid, i, status;
	char *path = NULL;

	if (*f[0] != '/')
	{
		if (_strstr(f[0], "./") != NULL)
			path = f[0];
		else
			path = _is_exist(f[0]);
		if (path == NULL)
			perror("_is_exist returned NULL"); }
	if (*f[0] == '/')
		path = f[0];

	pid = fork();
	if (pid == -1)
		exit(EXIT_FAILURE);
	else if (pid == 0)
	{
		if (path != NULL && f != NULL)
			execve(path, f, env);
		else
		{
			perror("Null pointer passed to execve");
			exit(EXIT_FAILURE); }
	}
	else
	{
		wait(&status);
	}
	if (path != f[0] && path != NULL)
		free(path);
	for (i = 0; f[i] != NULL; i++)
	{
		free(f[i]);
		f[i] = NULL; }
	free(f);
	f = NULL;
	return (WEXITSTATUS(status));
}
