#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * free_list - releases memory allocated for list
 * @head: pointer to first node to be freed
 */
void free_list(list_t *head)
{
	while (head)
	{
		free_list(head->next);
		if (head->str)
		free(head->str);
		free(head);
	}
}
