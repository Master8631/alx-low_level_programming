#include <stdlib.h>
#include "main.h"
/**
 * *array_range - creates an array of integers
 * @min: minimum range of stored values
 * @max: maximum range of stored values and numbers of elements
 *
 * Return: pointer to new array
 */
int *array_range(int min, int max)
{
	int *ptr;
	int y, size;

	if (min > max)
		return (NULL);
	size = max - min + 1;

	ptr = malloc(sizeof(int) * size);
	if (ptr == NULL)
		return (NULL);

	for (y = 0; min <= max; y++)
		ptr[y] = min++;

	return (ptr);
}