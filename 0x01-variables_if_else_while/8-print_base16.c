#include <stdio.h>
/**
 * main - print all numbers of base 16 in lowercase
 * followed by new line
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int r;
	char ch;

	for (r = 48; r < 58; r++)
	{
		putchar(r);
	}
	for (ch = 'a'; ch <= 'f'; ch++)
	{
		putchar(ch);
	}
	putchar ('\n');
	return (0);
}
