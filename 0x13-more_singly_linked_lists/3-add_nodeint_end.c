#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the beginning of a list
 * @head: parameter one
 * @n: parameter two
 *
 * Return: an address to the new element
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	struct listint_s *newnode, *temp = *head;

	newnode = (struct listint_s *)malloc(sizeof(struct listint_s));

	newnode->n = strdup(n);
	newnode->next = NULL;
	if (head == NULL)
	{
		head = temp = newnode;
	}
	else
	{
		newnode->next = temp;
		temp = newnode;
	}
	while (temp->next != NULL)
	{
		temp = temp->next;
	}

	temp->next = newnode;

	return (newnode);
}
