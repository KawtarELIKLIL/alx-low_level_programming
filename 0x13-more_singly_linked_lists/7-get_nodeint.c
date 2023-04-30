#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
*get_nodeint_at_index - nth node
*@head: pointer
*@index: index of node
*Return: nth node
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int cont = 0;

	while (head && cont < (index + 1))
	{
		head = head->next;
		cont++;
		if (cont == index)
			return (head);
	}
	return (NULL);
}
