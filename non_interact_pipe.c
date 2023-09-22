#include "main.h"
/**
 * non_interact_pipe - function that handle non-interact pipe
 */
void non_interact_pipe(void)
{
	char **f;
	char *d = " \"|\n\t";
	char *str_pipe;
	int i, x, count, l, k;
	char **s = _read_lines();
	for (i = 0; s[i] != NULL; i++)
	{
		str_pipe = s[i];
		if (_strcmp(str_pipe, "\n") == 0 || _strcmp(str_pipe, "	\n") == 0)
			exit(EXIT_SUCCESS);
		for (count = 0; str_pipe[count] != '\0'; count++)
		{
			if (str_pipe[count] != ' ')
			{
				break;
			}
		}
		if ((count) == _strlen(str_pipe))
		{
			for (l = 0; s[l] != NULL; l++)
			{
				free (s[l]);
			}
				free (s);
			exit(EXIT_SUCCESS);
		}
		f = get_token(str_pipe, d);
		x = is_builtin(f);
		if (x == 1)
		{
			for (l = 0; f[l] != NULL; l++)
			{
				free(f[l]);
			}
			free(f);
			free (s[i]);
			free (s);
			exit(EXIT_SUCCESS);
		}
		if (x == 3)
		{
			for (l = 0; f[l] != NULL; l++)
			{
				free(f[l]);
			}
			free(f);
			free (s[i]);
			free (s);
			env();
			exit(EXIT_SUCCESS);
		}
		k = execute(f);
		if (k != 0)
		{
			for (l = 0; s[l] != NULL; l++)
				{
					free(s[l]);
				}
				free(s);
				exit(k);
		}
		free (s[i]);
	}
	free (s);
}
