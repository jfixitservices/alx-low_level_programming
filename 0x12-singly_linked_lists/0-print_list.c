#include <stddef.h>
#include "lists.h"

/**
 * print_list - Prints elements of a linked list
 * @h: Pointer to the list_t list to print
 *
 * Return: The number of nodes printed
 */
size_t print_list(const list_t *h)
{
	size_t nodes_printed = 0;

	while (h)
	{
		size_t len = 0;

		if (h->str)
		{
			while (h->str[len])
				len++;
			_print_str_len(len);
			_putchar(' ');
			_print_str(h->str);
			_putchar('\n');
		}
		else
		{
			_print_str_len(0);
			_putchar(' ');
			_print_str("(nil)");
			_putchar('\n');
		}
		h = h->next;
		nodes_printed++;
	}

	return (nodes_printed);
}
