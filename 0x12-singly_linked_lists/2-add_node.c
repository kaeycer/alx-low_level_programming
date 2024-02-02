#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds a new node at the beginning
 * of a struct
 * @head: address to the first node
 * @str: string that needs to be duplicated
 *
 * Return: an address of the new element
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *node;
	unsigned int n = 0;

	node = malloc(sizeof(list_t));
	if (node == NULL)
		return (NULL);

	node->str = strdup(str);

	while (node->str[n] != '\0')
		n++;
	node->len = n;
	node->next = *head;
	*head = node;
	return (node);
}
