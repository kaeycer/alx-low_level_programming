#include <stdio.h>
#include "lists.h"

/**
 * free_listint - Frees a list
 * @head: head address
*/
void free_listint(listint_t *head)
{
	struct listint_s *temp;

	while (temp != NULL)
	{
		free(head);
		temp = temp->next;
		head = temp;
	}
}
