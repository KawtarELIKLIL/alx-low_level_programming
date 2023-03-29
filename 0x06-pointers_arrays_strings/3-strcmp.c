#include "main.h"
/**
*_strcmp - compares two strings
  *@s1: input char
  *@s2: input char
  *Return: comapres two strings
  */
int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int j = 0;

	while (s2[i] != '0' || s1[i] != '0')
	{
		if (s2[i] != s1[i])
		{
			j = s1[i] - s2[i];
			break;
		}
		i++;
	}
	return (j);
}
