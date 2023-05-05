#include <stdio.h>
#include "main.h"
/**
*clear_bit - value of a bit to 0 at index
*@n: value
*@index: given index
*Return: 1 or -1
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);
	if (*n & 1L << index)
		*n ^= 1L << index;
	return (1);
}
