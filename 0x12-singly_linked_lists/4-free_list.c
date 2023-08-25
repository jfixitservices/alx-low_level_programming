#include <stdlib.h>
#include "lists.h"

/**
 * free_list - Frees a linked list
 * @head: list_t list to be freed
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head->next;
		_free(head->str);
		_free(head);
		head = temp;
	}
}
