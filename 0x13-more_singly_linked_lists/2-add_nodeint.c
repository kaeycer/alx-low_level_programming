#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a list
 * @head: parameter one
 * @n: parameter two
 *
 * Return: an address to the new element
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	struct listint_s *newnode;

	newnode = (struct listint_s *)malloc(sizeof(struct listint_s));

	if (head == NULL)
	{
		head = newnode;
	}
	else
	{
		newnode->next = head;
		*head = newnode;
	}
	newnode->n = strdup(n);

	return (newnode);
}
