#include "main.h"
/**
 * non_interact_pipe - function that handle non-interact pipe
 */
void non_interact_pipe(void)
{
	char **f, **s = _read_lines();
	char *d = " \"|\n\t", *str_pipe;
	int i, x, count, l, k;

	for (i = 0; s[i] != NULL; i++)
	{
		str_pipe = s[i];
		if (_strcmp(str_pipe, "\n") == 0 || _strcmp(str_pipe, "	\n") == 0)
			exit(EXIT_SUCCESS);
		for (count = 0; str_pipe[count] != '\0'; count++)
		{
			if (str_pipe[count] != ' ')
				break; }
		if ((count) == _strlen(str_pipe))
		{
			for (l = 0; s[l] != NULL; l++)
				free(s[l]);
			free(s);
			exit(EXIT_SUCCESS); }
		f = get_token(str_pipe, d);
		x = is_builtin(f);
		if (x == 1)
		{
			free_3(f);
			free(s[i]);
			free(s);
			exit(EXIT_SUCCESS); }
		if (x == 3)
		{
			free_3(f);
			free(s[i]);
			free(s);
			env();
			exit(EXIT_SUCCESS); }
		k = execute(f);
		if (k != 0)
			free_2(k, s);
		free(s[i]); }
	free(s);
}

/**
 * free_2 - fafafafaf
 * @s: string
 * @k: int
 */

void free_2(int k, char **s)
{
	int l;

	for (l = 0; s[l] != NULL; l++)
	{
		free(s[l]);
	}
	free(s);
	exit(k);
}

/**
 * free_3 - fafafafaf
 * @f: string
 */

void free_3(char **f)
{
	int l;

	for (l = 0; f[l] != NULL; l++)
	{
		free(f[l]);
	}
	free(f);
}
