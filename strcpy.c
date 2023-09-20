#include "main.h"
/**
 * _strcpy - function
 *
 * @dest: copied array
 * @src: array
 *
 * Return: char Array
 */

char *_strcpy(char *dest, char *src)
{
	int i;
	int x;

	for (i = 0; src[i] != '\0'; i++)
	{
	}
	for (x = 0; x <= i; x++)
	{
		dest[x] = src[x];
	}
	return (dest);
}
