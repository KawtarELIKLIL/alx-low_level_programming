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
	char *spt = "";
	const char *x;
	va_list str;

	if (format == NULL)
		return;
	va_start(str, format);
	while (format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%s%c", spt, va_arg(str, int));
				break;
			case 'i':
				printf("%s%d", spt, va_arg(str, int));
				break;
			case 'f':
				printf("%s%f", spt, va_arg(str, double));
				break;
			case 's':
				x = va_arg(str, char *);
				if (!x)
					x = "(nil)";
				printf("%s%s", spt, x);
				break;
			default:
				i++;
				continue;
		}
		spt = ", ";
		i++;
	}
	printf("\n");
	va_end(str);
}
