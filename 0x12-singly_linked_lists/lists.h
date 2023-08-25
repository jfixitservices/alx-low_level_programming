#ifndef LISTS_H
#define LISTS_H

/**
 * struct list_s - Singly linked list node structure
 * @str: String - (malloc'ed string)
 * @len: Length of the string
 * @next: Points to the next node
 *
 * Description: Singly linked list node structure
 * for a project at Holberton School.
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

/* Function Prototypes */
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
void free_list(list_t *head);

#endif
