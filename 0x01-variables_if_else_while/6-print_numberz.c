#include <stdio.h>
/**
 * main - single digit numbers of base 10 starting from 0
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	for (n = 48; n <= 57; n++)
	{
		putchar((char)n);
	}
	putchar('\n');
	return (0);
}
