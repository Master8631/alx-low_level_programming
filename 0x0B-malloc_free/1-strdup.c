#include <stdio.h>

#include <stdlib.h>

#include "main.h"

/**
 * _strdup - returns duplicate pointer to new string
 * @str: char
 * Return: 0
 */

char *_strdup(char *str)

{

	char *fire;

	int i, r = 0;



	if (str == NULL)

		return (NULL);

	i = 0;

	while (str[i] != '\0')

		i++;



	fire = malloc(sizeof(char) * (i + 1));



	if (fire == NULL)

		return (NULL);



	for (r = 0; str[r]; r++)

		fire[r] = str[r];



	return (fire);

}
