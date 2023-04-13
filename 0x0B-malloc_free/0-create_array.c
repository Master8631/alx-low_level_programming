#include "main.h"
#include <stdlib.h>
/**
 * create_array - create array of size and assign char c
 * @size: size of array
 * @c: assigned char
 * Description: creating array of size and assign char c
 * Return: pointer to array, otherwise NULL if fail
 *
 */

char *create_array(unsigned int size, char c)

{

	unsigned int f;

	char *str;


	str = malloc(sizeof(char) * size);

	if (size == 0 || str == NULL)

		return (NULL);


	for (f = 0; f < size; f++)

		str[f] = c;

	return (str);

}

