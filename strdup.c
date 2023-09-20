#include "main.h"

/**
 * _strdup - creats a copy of an array
 *
 * @str: string wanted to be copied
 *
 * Return: A pointer to the char array
*/

char *_strdup(char *str)
{
	int lenght;
	char *array;

	if (str == NULL)
		return (NULL);
	lenght = _strlen(str);
	array = malloc((sizeof(char) * lenght) + 1);
	if (array == NULL)
		return (NULL);
	array[lenght] = '\0';
	while (lenght--)
		array[lenght] = str[lenght];
	return (array);

}
