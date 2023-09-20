#include "main.h"
/**
 * _strcat - function that concatenates two strings
 *
 * @dest: first string
 * @src: second string
 *
 * Return: new string
 */

char *_strcat(char *dest, char *src)
{
	int len1;
	int len2;
	int x;

	for (len1 = 0; dest[len1] != '\0'; len1++)
	{
	}
	for (len2 = 0; src[len2] != '\0'; len2++)
	{
	}
	for (x = 0; x < len2; x++)
	{
		dest[len1] = src[x];
		len1++;
	}
	dest[len1] = '\0';
	return (dest);
}
