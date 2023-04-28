#include <stdlib.h>
#include "lists.h"

/**
 * free_list - frees a linked list
 * @head: list_t list to be freed
 */
void free_list(list_t *head)
{
list_t *n;

if (!head)
	return;
node = head
while (head)
{
n = node->next;
free(node->str);
free(node);
node = n;
}
}
