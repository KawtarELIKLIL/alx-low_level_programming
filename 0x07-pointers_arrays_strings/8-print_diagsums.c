#include "main.h"
#include <stdio.h>
/**
*print_diagsums -  prints the sum  of two diaginals of matrix
*@a: input array
*@size: size of array
*/
void print_diagsums(int *a, int size)
{
	int i, j;
	int sum1 = 0;
	int sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 = sum1 + a[i];
		a += size;
	}
	printf("%d, ", sum1);
	a -= size;
	for (j = 0; j < size; j++)
	{
		sum2 = sum2 + a[j];
		a -= size;
	}
	printf("%d\n", sum2);
}
