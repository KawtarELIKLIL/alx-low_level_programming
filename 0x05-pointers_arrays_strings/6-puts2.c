#include "main.h"
/**
  *puts2 - prints every other character
  *@str: input string
  */
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
		i++;
	}
	_putchar('\n');
}
