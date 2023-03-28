#include "main.h"
/**
  *_strcpy - copies the string from a pointer
  *@dest: input destination
  *@src: input char
  */
char *_strcpy(char *dest, char *src)
{
	int j = 0;
	int n;

	while (src[j] != '\0')
	{
		j++;
	}
	for (n = 0; n < j; n++)
	{
		dest[n] = src[n];
	}
	return (dest);
}
