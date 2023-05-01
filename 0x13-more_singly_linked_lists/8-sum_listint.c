#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
*sum_listint - the sum of all the data
*@head: pointer
*Return: sum
*/
int sum_listint(listint_t *head)
{
	int sum = 0;
	int num;
	listint_t *new = head;

	if (head == NULL)
		return (0);
	while (new)
	{
		num = new->n;
		sum = sum + num;
		new = new->next;
	}
	return (sum);
}
