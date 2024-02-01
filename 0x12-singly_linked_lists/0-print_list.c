#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
 * print_list - prints all the elements passed to the function
 * @h: a node
 *
 * Return: number of nodes
*/
size_t print_list(const list_t *h)
{
	size_t elements = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		elements++;
	}
	return (elements);
}
