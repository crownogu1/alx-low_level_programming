#include <stdio.h>
#include "lists.h"

/**
 * free_listint2 - Frees the memory allocated for listint_t list.
 * @head: A pointer to the address of the head of listint_t list.
 * Description: Sets the head to NULL.
 *
 * Return: Success
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;

	while (*head)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}

	head = NULL;
}
