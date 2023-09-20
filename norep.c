#include "main.h"
/**
 * countStringOccurrences - function that handle no. of delimiters
 * @s: sdads
 * @d: dsadsa
 * Return: path of program
 */
int countStringOccurrences(char *s, char *d)
{
	int count = 0;
	int d_len = _strlen(d);

	char *ptr = _strstr(s, d);

	while (ptr != NULL)
	{
		count++;
		ptr = _strstr(ptr + d_len, d);
	}
	if (count == 0)
		count = 1;
	return (count);
}
