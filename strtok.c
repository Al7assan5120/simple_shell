#include "main.h"
/**
 * _strtok - tokenize string
 * @str: string
 * @delim: delimiter
 * Return: lenght of string
 */
char *_strtok(char *str, const char *delim)
{
	return (strtok(str, delim));
}
