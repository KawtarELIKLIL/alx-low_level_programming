#include "lists.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
*print_listint - prints all the elements
*@h: pointer
*Return: number of nodes
*/
size_t print_listint(const listint_t *h)
{
	size_t cont = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		cont++;
	}
	return (cont);
}
