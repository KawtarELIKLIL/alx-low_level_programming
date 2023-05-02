#include "lists.h"
#include <string.h>
#include <stdlib.h>
/**
*reverse_listint - reverses linked list
*@head: double pointer
*Return: pointer
*/
listint_t *reverse_listint(listint_t **head)
{
	listint_t *nxt = NULL;
	listint_t *prev = NULL;

	while (*head)
	{
		nxt = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = nxt;
	}
	*head = prev;
	return (*head);
}
