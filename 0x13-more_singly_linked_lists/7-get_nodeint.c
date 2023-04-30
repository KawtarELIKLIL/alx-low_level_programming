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
	listint_t *new = head;

	while (new && cont < (index + 1))
	{
		new = new->next;
		cont++;
		if (cont == index)
			return (new);
	}
	return (NULL);
}
