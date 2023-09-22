#include "main.h"
/**
 * is_builtin - function that executes a built in command line
 * @f: command
 * Return: number
 */
int is_builtin(char **f)
{
	char *arr [] = {"exit", "cd", "env"};
	int i;
	int x = 0;

	
	for (i = 0; i < 3 ; i++)
	{
		if (_strcmp(f[0], arr[i]) == 0)
			break;
	}
	
	switch (i)
	{
	case 0:
		for (i = 0; f[x] != NULL; i++)
		{
			free(f[x]);
			f[x] = NULL; }
		free(f);
		f = NULL;
		return(1);
		break;
	case 1:
		/*x = chdir (f[1]);*/
		break;
	case 2:
		env();
		break;
	}
	return (0);
}
