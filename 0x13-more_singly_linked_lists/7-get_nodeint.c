#include "lists.h"
#include <stdio.h>
#include <string.h>
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

	while (head)
	{
		head = head->next;
		cont++;
		if (cont == index)
			return (head);
	}
	return (NULL);
}
