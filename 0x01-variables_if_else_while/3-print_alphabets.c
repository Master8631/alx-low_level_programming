#include <stdio.h>
/**
 * main - output prints alphabet in lowercase then in uppercase
 * followed by new line
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int c;

	/*print lowercase alphabet*/
	for (c = 'a'; c <= 'z'; c++)
		putchar (c);
	/*print uppercase alphabet*/
	for (c = 'A'; c <= 'Z'; c++)
		putchar (c);
	/*print new line*/
	putchar('\n');
	return (0);
}
