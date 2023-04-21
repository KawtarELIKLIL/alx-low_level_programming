#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
*print_numbers - prints numbers
*@n: number of num
*@separator: printedbetween numbers
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i, x;
	va_list num;

	if (n == 0)
		printf(" ");
	va_start(num, n);
	for (i = 0; i < (n - 1); i++)
	{
		x = va_arg(num, int);
		printf("%d", x);
		if (separator != NULL)
			printf("%s ", separator);
	}
	x = va_arg(num, int);
	printf("%d\n", x);
	va_end(num);
}
