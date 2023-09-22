#include "main.h"
/**
 * get_token - return tokanized string
 * @s: string from getline
 * @d: delemitir
 * Return: array of pointers to pointers
*/
char **get_token(char *s, char *d)
{
	int i = 0;
	char *token;
	char *str;
	char **tokens;

	/*x = countStringOccurrences(s, d);*/
	tokens = malloc(10000 * sizeof(char *));
	if (tokens == NULL)
		return (NULL);
	if (s == NULL )
	{
		free(tokens);
		exit(EXIT_SUCCESS);
	}
	str = _strdup(s);
	token = _strtok(str, d);
	while (token != NULL)
	{
		tokens[i] = _strdup(token);
		i++;
		token = _strtok(NULL, d);
	}
	tokens[i] = NULL;
	free(str);
	return (tokens);
}
