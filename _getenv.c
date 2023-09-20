#include "main.h"
/**
 * _getenv - function that returns environment variable
 *
 * @path_name: environment variable
 *
 * Return: pointer to environment variable array
 */

char *_getenv(char *path_name)
{
	int i = 0;
	char *env_var;
	char *env_value;
	char *result;
	char *copy;
	char *z;

	while (environ[i])
	{
		copy = malloc(_strlen(environ[i]) + 1);
		if (copy == NULL)
			return (NULL);
		z = malloc(_strlen(environ[i]));
		if (z == NULL)
			return (NULL);
		_strcpy(copy, environ[i]);
		env_var = _strtok(copy, "=");
		env_value = _strtok(NULL, "=");

		if (_strcmp(env_var, path_name) == 0)
		{
			result = _strcpy(z, env_value);
			free(copy);
			return (result);
		}
		i++;
		free(copy);
		free(z);
	}
	return (NULL);
}
