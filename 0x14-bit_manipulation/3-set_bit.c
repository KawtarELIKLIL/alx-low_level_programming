#include <stdio.h>
#include "main.h"
/**
*set_bit - value of a bit to 1 at index
*@n: value
*@index: given index
*Return: 1 or -1
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(n) *8)
		return (-1);
	return (!!(*n |= 1L << index));
}
