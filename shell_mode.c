#include "main.h"
/**
 * shell_mode - function that handle shell mode
 * @ac: sdads
 * Return: path of program
 */
int shell_mode(int ac)
{
	struct stat stdin_stat;

	fstat(STDIN_FILENO, &stdin_stat);
	if (ac == 1 && isatty(STDIN_FILENO))
		return (INREACT_MODE);
	if (!isatty(STDIN_FILENO) && ac == 1)
		return (NON_INTERACT_PIPE);
	if (ac >= 1)
		return (NON_INTERACT_FILE);
	return (-1);
}
