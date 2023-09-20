#include "main.h"
/**
 * _free - function that executes a command line
 * @count: no
 */
void _free(int count, ...)
{
	int i;
	va_list countptr;

	va_start(countptr, count);

	for (i = 0; i < count; i++)
		free(va_arg(countptr, char *));
	va_end(countptr);
}
