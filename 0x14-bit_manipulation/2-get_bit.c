#include <stdio.h>
#include "main.h"
/**
*get_bit - value of bit at index
*@n: bit
*@index: given index
*Return: value of bit at index
*/
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);
	return (n >> index & 1);
}
