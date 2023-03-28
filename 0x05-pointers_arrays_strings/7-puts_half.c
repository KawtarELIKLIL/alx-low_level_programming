#include "main.h"
/**
  *puts_half - prints half a string
  *@str: input string
  */
void puts_half(char *str)
{
	int j = 0;
	int n;

	while (str[j] != '\0')
	{
		j++;
	}
	if (j % 2 == 0)
	{
		for (n = j / 2; n < j; n++)
			_putchar(str[n]);
	}
	else
	{
		for (n = ((j - 1) / 2) + 1; n < j; n++)
			_putchar(str[n]);
	}
	_putchar('\n');
}
