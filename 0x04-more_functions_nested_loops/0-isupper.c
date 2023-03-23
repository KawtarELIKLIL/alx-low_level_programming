#include "main.h"

/**
* _isupper - checks for uppercase character
* @c: the caractere in ACII
* Return: return 1 if uppercase
*/

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
