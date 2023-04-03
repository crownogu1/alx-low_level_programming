#include <stdio.h>
#include "lists.h"

/**
 * free_listint - Frees the memory allocated to listint_t list.
 * @head: A pointer to the head of the listint_t list to be freed.
 *
 * Return: Success
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;

	}
}
