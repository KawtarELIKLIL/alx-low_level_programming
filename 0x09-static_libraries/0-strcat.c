#include "main.h"
/**
  *_strcat - concatenates two strings
  *@dest: input destination
  *@src: input char
  *Return: two strings concatenated
  */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (dest[j] != '\0')
	{
		j++;
	}
	while (src[i] != '\0')
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	return (dest);
}
