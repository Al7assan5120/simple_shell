#include "main.h"
/**
 * tok_path - return path
 * @env_path: string
 * Return: array of pointers of paths
 */

char **tok_path(char *env_path)
{
	char *d = ":";
	char **x;

	x = get_token(env_path, d);
	if (x == NULL)
	{
		free(x);
		exit(1);
	}
	return (x);
}
