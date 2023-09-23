#include "main.h"
/**
 * env - void
 * Return: no return
 */

void env(void)
{
	int i = 0;
	int len;

	while (environ[i])
	{
		len = strlen(environ[i]);
		write(1, environ[i], len);
		write(1, "\n", 1);
		i++;
	}
}
