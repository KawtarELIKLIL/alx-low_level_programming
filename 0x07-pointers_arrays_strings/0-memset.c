#include "main.h"
/**
*_memset - fill memory with a constant byte
*@s: input char
*@b: input contant byte
*@n: number oof bytes of the memory filled
*Return: pointer to the memory area s
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
