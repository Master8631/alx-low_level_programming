#include <stdio.h>
/**
 * main - print lowercase alphabets in reverse
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int ch;

	for (ch = 'z'; ch >= 'a'; ch--)
		putchar (ch);
	putchar ('\n');
	return (0);
}
