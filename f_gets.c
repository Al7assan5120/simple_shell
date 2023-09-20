#include "main.h"
/**
 * _fgets - function that prints line by line from a stream file
 * @string: string
 * @n: number of readable char
 * @s: stream file
 * Return: pointer to read line array
 */
char *_fgets(char *string, int n, FILE *s)
{
	int f = fileno(s);
	int x;
	char l;

	for (x = 0; x < n - 1; x++)
	{
		if (read(f, &l, 1) <= 0)
			break;
		string[x] = l;
		if (l == '\n')
			break;
	}
	if (x == 0)
		return (NULL);
	string[x] = '\0';
	return (string);
}
