#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
*sum_them_all - sum of num
*@n: number of num
*Return: sum of num
*/
int sum_them_all(const unsigned int n, ...)
{
	unsigned int sum = 0;
	unsigned int i, x;
	va_list num;

	if (n == 0)
		return (0);
	va_start(num, n);
	for (i = 0; i < n; i++)
	{
		x = va_arg(num, int);
		sum = sum + x;
	}
	va_end(num);
	return (sum);
}
