#include "main.h"
/**
 * _getline - function that reads from input stream
 * @lineptr: array of enterd chars from stream
 * @n: number of read char
 * @stream: stream file
 * Return: number of read bytes
 */
ssize_t _getline(char **lineptr, size_t *n, FILE *stream)
{
	return (getline(lineptr, n, stream));
}
