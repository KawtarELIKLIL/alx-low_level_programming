#include "main.h"
/**
  *rev_string - prints a string in reverse
  *@s: input string
  */
void rev_string(char *s)
{
	char rev = s[0];
	int j = 0;
	int n;

	while (s[j] != '\0')
	{
		j++;
	}
	for (n = 0; n < j; n++)
	{
		j--;
		rev = s[n];
		s[n] = s[j];
		s[j] = rev;
	}
}
