
/**
 * _strcmp - function that concatenates two strings
 *
 * @s1: first string
 * @s2: second string
 *
 *
 * Return: interger value
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0'; i++)
	{
		int x = s1[i];
		int y = s2[i];


		if (x != y)
		{
			return (x - y);
		}

		else if (x == '\0')
		{
			x = 0;
		}

		else if (y == '\0')
		{
			y = 0;
		}
	}
	return (0);
}
