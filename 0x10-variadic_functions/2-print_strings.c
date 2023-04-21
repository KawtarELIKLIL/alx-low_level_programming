#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
*print_strings - print str
*@n: number of num
*@separator: printedbetween numbers
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *x;
	va_list str;

	if (n == 0)
		return;
	va_start(str, n);
	for (i = 0; i < (n - 1); i++)
	{
		x = va_arg(str, char *);
		printf("%s", x);
		if (separator != NULL)
			printf("%s ", separator);
	}
	x = va_arg(str, char *);
	printf("%s\n", x);
	va_end(str);
}
