#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
 * list_len - prints all the elements passed to the function
 * @h: a structure
 *
 * Return: number of nodes
*/
size_t list_len(const list_t *h)
{
	size_t elements = 0;

	while (h != NULL)
	{
		h = h->next;
		elements++;
	}
	return (elements);
}
