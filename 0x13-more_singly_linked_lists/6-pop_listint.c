#include <stdio.h>
#include "lists.h"

/**
 * pop_listint - Deletes the head node of listint_t list.
 * @head: A pointer to the address of the head of listint_t list.
 *
 * Return: If the linked list is empty - 0,
 *		Otherwise the head nide data (n).
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int rtn;

	if (*head == NULL)
		return (0);

	temp = *head;
	rtn = (*head)->n;
	*head = (*head)->next;

	free(temp);

	return (rtn);
}

