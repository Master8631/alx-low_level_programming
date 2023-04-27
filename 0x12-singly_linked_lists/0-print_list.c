#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all elements of linked lists
 * @h: pointer to list_t list to print
 *
 * Return: number of nodes printed
 */
size_t print_list(const list_t *h)
{
	size_t s = 0;

	while (h)
	/* initializes the code here */
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		s++;
	}

	return (s);
}
