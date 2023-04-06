#include "main.h"
/**
*_sqrt - returns the natural square root of a number
*@nm: input number
*@i: input loop
*Return: the natural square root of a number
*/
int _sqrt(int nm, int i)
{
	if (i <= nm)
	{
		if (i * i == nm)
			return (i);
		return (_sqrt(nm, i + 1));
	}
	return (-1);
}
/**
*_sqrt_recursion - returns the natural square root of a number
*@n: input number
*Return: the natural square root of a number
*/
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_sqrt(n, 1));
}
