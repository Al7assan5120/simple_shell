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

	str_pipe = _fgets(line, sizeof(line), stdin);
	f = get_token(str_pipe, d);
	execute(f, 0);
}
