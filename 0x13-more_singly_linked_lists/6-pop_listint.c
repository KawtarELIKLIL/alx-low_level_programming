#include "lists.h"
#include <string.h>
#include <stdlib.h>
/**
*pop_listint - deletes the head node
*@head: double pointer
*Return: head node’s data n
*/
int pop_listint(listint_t **head)
{
	listint_t *new;
	int data;

	if (head == NULL)
		return (0);
	new = (*head);
	data = new->n;
	(*head) = (*head)->next;
	free(new);
	new = NULL;
	return (data);
}
