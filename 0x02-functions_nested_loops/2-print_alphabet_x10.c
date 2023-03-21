#include "main.h"

/**
* print_alphabet_x10 - prints the alphabet
*
* Return: Always 0 (Success)
*/

void print_alphabet_x10(void)
{
	int i;
	int r;

	for (r = 0; r < 10; r++)
	{
		for (i = 97; i <= 122; i++)
		{
			_putchar(i);
		}
	_putchar('\n');
	}
}
