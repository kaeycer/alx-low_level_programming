#include <stdio.h>
#include "lists.h"

/**
 * print_listint - prints every node of the list
 * @h: parameter
 *
 * Return: Number of nodes
*/
size_t print_listint(const listint_t *h)
{
	size_t elements = 0;

	while (h != NULL)
	{
		h = h->next;
		elements++;
	}
	return (elements);
} 
