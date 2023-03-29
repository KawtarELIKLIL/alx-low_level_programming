#include "main.h"
/**
  *_strcat - concatenates two strings
  *@dest: input destination
  *@src: input char
  *@: input integer
  *Return: two strings concatenated
  */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[j] != '\0')
	{
		j++;
	}
	while (src[i] != '\0' && i < n)
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	return (dest);
}
