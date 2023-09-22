#include "main.h"
/**
 * non_interact_pipe - function that handle non-interact pipe
 */
void non_interact_pipe(void)
{
	char **f;
	char *d = " \"|\n\t";
	char *str_pipe;
	int z,i;
	char **s = _read_lines();

	for (i = 0; s[i] != NULL; i++)
	{
		str_pipe = s[i];
		if (_strcmp(str_pipe, "\n") == 0 || _strcmp(str_pipe, "	\n") == 0)
			exit(1);
		if (_strchr(str_pipe, '/') != NULL)
			z = 1;
		else
			z = 0;
		f = get_token(str_pipe, d);
		is_builtin(f);
		execute(f, z);
		free(s[i]);
	}
	free(s);
}
