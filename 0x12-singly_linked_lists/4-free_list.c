#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_list - Frees the current list in the heap
 * @head: address of the node
*/
void free_list(list_t *head)
{
	list_t *node;
	while ((node = head) != NULL)
	{
		head = head->next;
		free(node->str);
		free(node);
	}
	
}
