#include "main.h"
/**
 * _isdigit - checks for digit 0 through 9
 * @c: checks for digit 0 to 9
 * Return: 1 if c is a digit and 0 if otherwise
 */
int _isdigit(int c)

{
	if (c >= 48 && c <= 57)
	{
	return (1);
	}
	return (0);
}
