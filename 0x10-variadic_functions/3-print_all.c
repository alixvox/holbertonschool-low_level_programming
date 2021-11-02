#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - Prints anything
 *
 * @format: A list of variable types
 *
 * Return: Nothing.
 */

void print_all(const char * const format, ...)
{
	unsigned int i = 0;
	char *str, type;
	va_list ap;

	va_start(ap, format);
	while (format && format[i] != '\0')
	{
		type = format[i];
		switch (type)
		{
		case 'c':
			printf("%c", va_arg(ap, int));
			break;
		case 'i':
			printf("%d", va_arg(ap, int));
			break;
		case 'f':
			printf("%f", va_arg(ap, double));
			break;
		case 's':
			str = va_arg(ap, char *);
			if (!str)
				str = "(nil)";
			printf("%s", str);
			break;
		}
		if ((format[i + 1] != '\0') &&
		((type == 'c') || (type == 'i') || (type == 'f') || (type == 's')))
			printf(", ");
		i++;
	}
	va_end(ap);
	printf("\n");
}

