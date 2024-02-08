#include <stdio.h>
#include "lists.h"

/**
 * free_listint2 - Frees a list
 * @head: head address
*/
void free_listint2(listint_t **head)
{
	struct listint_s *temp;

	while (*head)
	{
		free(*head);
		temp = temp->next;
		*head = temp;
	}
	*head = NULL;
}
