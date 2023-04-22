#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Return sum of all parameters
 * @n: The number of parameters added to the function
 * @...: variable number of parameters to calculate sum
 *
 * Return: If n == 0 - 0.
 * Otherwise - sum of all parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list pl;
	unsigned int i, sum = 0;

	va_start(pl, n);

	for (i = 0; i < n; i++)
		sum += va_arg(pl, int);

	va_end(pl);

	return (sum);
}
