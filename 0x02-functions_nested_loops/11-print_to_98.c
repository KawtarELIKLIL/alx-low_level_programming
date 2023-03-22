#include "main.h"
#include <stdio.h>
/**
  *print_to_98 - prints to 98
  *@n: the startint number
  *
  *return: void
  */
void print_to_98(int n)
{
	int i = 0;

	if (n > 98)
	{
		for (i = n; i > 97; i--)
		{
			if (i > 98)
			{
				printf("%d, ", i);
			}
			else
			{
				printf("%d", i);
			}
		}
	}
	else if (n < 98)
	{
		for (i = n; i < 99; i++)
		{
			if (i < 98)
			{
				printf("%d, ", i);
			}
			else
			{
				printf("%d", i);
			}
		}
	}
	else
	{
		printf("%d", 98);
	}
	printf("\n");
}
