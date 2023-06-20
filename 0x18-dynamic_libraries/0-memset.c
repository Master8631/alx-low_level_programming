#include "main.h"
/**
 * _memset - fills n bytes of memory pointed by s with the constant b
 * @s: first memory address to be filled
 * @b: value to fill
 * @n: number of bytes to be changed.
 *
 * Return: arrays with new values for n
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
