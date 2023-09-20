#include "main.h"
/**
 * is_builtin - function that executes a built in command line
 * @f: command
 * Return: number
 */
int is_builtin(char **f)
{
	char *arr [] = {"exit", "cd"};
	int i;
	/*int x;*/
	for (i = 0; _strcmp(f[0], arr[i]) == 0; i++)
	{
		switch (i)
		{
		case 0:
			exit(EXIT_SUCCESS);
			break;
		case 1:
			/*x = chdir (f[1]);*/
			break;
		}
	}
	return (0);
}
