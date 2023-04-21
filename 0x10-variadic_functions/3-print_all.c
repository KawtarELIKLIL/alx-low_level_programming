#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include "variadic_functions.h"
/**
*print_all - print anything
*
*@format: type of input
*/
void print_all(const char * const format, ...)
{
	int i = 0;
	const char *x;
	va_list str;

	if (format == NULL)
		return;
	va_start(str, format);
	while (format[i])
	{
		x = va_arg(str, char *);
		printf("%s, ", x);
		i++;
	}
	x = va_arg(str, char *);
	printf("%s\n", x);
	va_end(str);
}
