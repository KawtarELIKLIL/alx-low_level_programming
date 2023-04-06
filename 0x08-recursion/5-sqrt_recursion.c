#include "main.h"
/**
*_sqrt_recursion - returns the natural square root of a number
*@n: input number
*Return: the natural square root of a number
*/
int _sqrt_recursion(int n)
{
	static int i = 1;

	if (i <= n)
	{
		if (i * i == n)
			return (i);
		i++;
		return (_sqrt_recursion(n));
	}
	return (-1);
}
