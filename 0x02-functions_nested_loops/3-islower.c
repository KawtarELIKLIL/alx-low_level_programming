#include "main.h"

/**
* _islower - checks for lowercase character
* @c: the caractere in ACII
* Return: Always 0 (Success)
*/

int _islower(int c)
{
	if (c >= 79 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
