#include "main.h"
/**
 * _strchr - Entry point of first occurrence
 * @s: the input value
 * @c: input value
 * Return: 0 (Success)
 */
char *_strchar(char *s, char c)
{
	int i = 0;

	for (; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}
