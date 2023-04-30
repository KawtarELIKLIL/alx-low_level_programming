#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
*listint_len - number of elements in linked list
*@h: pointer
*Return: number of elements in linked list
*/
size_t listint_len(const listint_t *h)
{
	size_t cnt = 0;

	while (h)
	{
		cnt++;
		h = h->next;
	}
	return (cnt);
}
