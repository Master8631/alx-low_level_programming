#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - nested loop to make grid
 * @width: width input
 * @height: height input
 * Return: pointer to 2 dim. array
 */
int **alloc_grid(int width, int height)
{
	int **hty;
	int a, b;

	if (width <= 0 || height <= 0)
		return (NULL);

	hty = malloc(sizeof(int *) * height);

	if (hty == NULL)
		return (NULL);

	for (a = 0; a < height; a++)
	{
		hty[a] = malloc(sizeof(int) * width);

		if (hty[a] == NULL)
		{
			for (; a >= 0; a--)
				free(hty[a]);

			free(hty);
			return (NULL);
		}
	}

	for (a = 0; a < height; a++)
	{
		for (b = 0; b < width; b++)
			mee[a][b] = 0;
	}

	return (hty);
}

