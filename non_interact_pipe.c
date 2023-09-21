#include "main.h"
/**
 * non_interact_pipe - function that handle non-interact pipe
 */
void non_interact_pipe(void)
{
	char **f;
	char *d = " \"|\n\t";
	char line[1024];
	char *str_pipe;
	int z;

	str_pipe = _fgets(line, sizeof(line), stdin);
	if (_strcmp(str_pipe, "\n") == 0 || _strcmp(str_pipe, " \n") == 0
		|| _strcmp(str_pipe, "	\n") == 0 || _strcmp(str_pipe, "  \n") == 0)
			exit(1);
	if (_strchr(str_pipe, '/') != NULL)
		z = 1;
	else
		z = 0;
	f = get_token(str_pipe, d);
	execute(f, z);
}
