#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
*list_len - number of elements in linked list
*@h: pointer
*Return: number of elements in linked list
*/
size_t list_len(const list_t *h)
{
	size_t cnt = 0;

	while (h)
	{
		cnt++;
		h = h->next;
	}
	return (cnt);
}
