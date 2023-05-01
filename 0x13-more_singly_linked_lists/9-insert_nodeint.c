#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
*insert_nodeint_at_index - insert at nth node
*@head: pointer
*@idx: index of node
*@n: num
*Return: new node
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int cont = 0;
	listint_t *new = *head;
	listint_t *node;

	node = malloc(sizeof(listint_t));
	if (!node || !head)
		return (NULL);
	node->n = n;
	node->next = NULL;
	if (idx == 0)
	{
		node->next = *head;
		*head = node;
		return (node);
	}
	while (new && cont < (idx - 1))
	{
		new = new->next;
		cont++;
	}
	node->next = new->next;
	new->next = node;
	return (node);
}
