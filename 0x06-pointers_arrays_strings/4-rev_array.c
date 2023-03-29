#include "main.h"
/**
*reverse_array - reverses an array of int
  *@a: input integer
  *@n: input integer
  */
void reverse_array(int *a, int n)
{
	int i;
	int rev;

	for (i = 0; i < n; i++)
	{
		n--;
		rev = a[i];
		a[i] = a[n];
		a[n] = rev;
	}
}
