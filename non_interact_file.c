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
	char str[100000];
	char *ex_str;
	char *err = "./hsh: 0: cannot open";

	fp = fopen(av[1], "r");
	if (fp == NULL)
	{
		write(2, err, (_strlen(err)) + 1);
		exit(2);
	}
	while (!feof(fp))
	{
		ex_str = fgets(str, 100000, fp);
		if (ex_str == NULL)
		{
			fclose(fp);
			exit(0);
		}
		f = get_token(ex_str, d);
		is_builtin(f);
		execute(f);
	}
}
