#include "main.h"
#include <stdlib.h>
/**
 * argstostr - main entry
 * @ac: int input
 * @av: double pointer array
 * Return: 0
 */
char *argstostr(int cd, char **fm)
{
	int c, n, r = 0, l = 0;
	char *str;

	if (cd == 0 || fm == NULL)
		return (NULL);

	for (c = 0; c < cd; c++)
	{
		for (n = 0; fm[c][n]; n++)
			l++;
	}
	l += cd;

	str = malloc(sizeof(char) * l + 1);
	if (str == NULL)
		return (NULL);
	for (c = 0; c < cd; c++)
	{
		for (n = 0; fm[c][n]; n++)
		{
			str[r] = fm[c][n];
			r++;
		}
		if (str[r] == '\0')
		{
			str[r++] = '\n';
		}
	}
	return (str);
}

