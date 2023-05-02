#include "lists.h"
#include <string.h>
#include <stdlib.h>
/**
*delete_nodeint_at_index - deletes the index node
*@head: double pointer
*@index: index of the node
*Return: 1 or -1
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *cur = *head;
	listint_t *prev = *head;
	unsigned int cont = index;

	if (*head == NULL)
		return (-1);
	else if (index == 0)
	{
		*head = cur->next;
		free(cur);
		cur = NULL;
		return (1);
	}
	else
	{
		while (cont > 0)
		{
			prev = cur;
			cur = cur->next;
			cont--;
		}
		prev->next = cur->next;
		free(cur);
		cur = NULL;
		return (1);
	}
	return (-1);
}
