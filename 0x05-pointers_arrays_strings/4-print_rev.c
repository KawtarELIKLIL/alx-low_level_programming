#include "main.h"
/**
  *print_rev - prints a string in reverse
  *@s: input string
  */
void print_rev(char *s)
{
	int len = 0;
	int j = 0;
	int i;

	while (s[j] != '\0')
	{
		len++;
		j++;
	}
	i = len - 1;
	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
