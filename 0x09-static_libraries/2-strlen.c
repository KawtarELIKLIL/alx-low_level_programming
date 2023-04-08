#include "main.h"
/**
  *_strlen - tells the length of a string
  *@s: input shar
  *Return:  returns the length of a string
  */
int _strlen(char *s)
{
	int len = 0;
	int i = 0;

	while (s[i] != '\0')
	{
		len++;
		i++;
	}
	return (len);
}
