#include "main.h"
/**
 * non_interact_file - function that handle non-interact file
 * @av: sdads
 * Return: path of program
 */
void non_interact_file(char *av[])
{
	char **f;
	char *d = " \n\t";
	FILE *fp = NULL;
	char str[100];
	char *ex_str;

	fp = fopen(av[1], "r");
	if (fp == NULL)
	{
		perror("fopen");
		exit(1);
	}
	while (!feof(fp))
	{
		ex_str = _fgets(str, 100, fp);
		if (ex_str == NULL)
		{
			fclose(fp);
			exit(1);
		}
		f = get_token(ex_str, d);
		is_builtin(f);
		execute(f);
	}
}
