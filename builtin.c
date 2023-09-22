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
	
	for (i = 0; i < 3 ; i++)
	{
		if (_strcmp(f[0], arr[i]) == 0)
			break;
	}
	
	switch (i)
	{
	case 0:
		return(1);
		break;
	case 1:
		/*x = chdir (f[1]);*/
		break;
	case 2:
		return(3);
		break;
	}
	return (0);
}
