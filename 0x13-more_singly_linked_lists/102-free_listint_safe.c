#include "lists.h"

/**
 * loop_listint_len - This calculates the length of a loop in a linked list
 * @head: This points the pointer to the head of the linked list
 *
 * Return:This returns the number of nodes in the loop, or 0 if there is no loop
 */
size_t loop_listint_len(const listint_t *head)
{
	const listint_t *slow_ptr, *fast_ptr;
	size_t length = 1;

	/* This runs if the list is empty or has only one node, there is no loop */
	if (head == NULL || head->next == NULL)
		return (0);

	slow_ptr = head->next;  /*This is a tortoise pointer */
	fast_ptr = head->next->next;  /* This is a pointer */

	/* This is a Floyd's cycle-finding algorithm */
	while (fast_ptr != NULL)
	{
		if (slow_ptr == fast_ptr)
		{
			slow_ptr = head;
			while (slow_ptr != fast_ptr)
			{
				length++;
				slow_ptr = slow_ptr->next;
				fast_ptr = fast_ptr->next;
			}

			slow_ptr = slow_ptr->next;
			while (slow_ptr != fast_ptr)
			{
				length++;
				slow_ptr = slow_ptr->next;
			}

			return (length);
		}

		slow_ptr = slow_ptr->next;
		fast_ptr = fast_ptr->next->next;
	}

	return (0);
}

/**
 * free_listint_safe - This frees a listint_t list
 * @h: This is the  double pointer to the head of the list
 * Return: This returns the size of the list that was free'd
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *tmp;
	size_t length, i;

	length = loop_listint_len(*h);

	if (length == 0)
	{
		for (i = 0; *h != NULL; i++)
		{
			tmp = *h;
			*h = (*h)->next;
			free(tmp);
		}
	}
	else
	{
		for (i = 0; i < length; i++)
		{
			tmp = *h;
			*h = (*h)->next;
			free(tmp);
		}
		*h = NULL;
	}

	h = NULL;

	return (i);
}
