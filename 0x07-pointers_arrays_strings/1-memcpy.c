#include "main.h"
/**
*_memcpy - fill memory with a copt
*@src: input char
*@dest: input char
*@n: number of bytes of the memory filled
*Return: pointer to the memory area s
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
