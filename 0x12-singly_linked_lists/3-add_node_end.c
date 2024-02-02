#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds a new node at the beginning
 * of a struct
 * @head: address to the first node
 * @str: string that needs to be duplicated
 *
 * Return: an address of the new element
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node, *temp;
	unsigned int n = 0;

	node = malloc(sizeof(list_t));
	if (node == NULL)
		return (NULL);

	node->str = strdup(str);

	while (node->str[n] != '\0')
		n++;
	node->len = n;
	node->next = NULL;
	temp = *head;

	if (temp != NULL)
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = node;
	}
	else
		*head = node;

	return (*head);
}
