#include "main.h"
/**
 * _strchr - locates a character in a string.
 * @s: the string source
 * @c: the char to locate from
 *
 * Return: char pointer.
 */
char *_strchr(char *s, char c)
{
	int i = 0;
	char *p;

	for (p = s; s[i] != '\0'; p++)
	{
		if (*p == '\0')
		{
			break;
		}
		if (*p == c)
		{
			break;
		}
		i++;
	}
	if (*p == c)
	{
		return (p);
	}
	return (0);
}
