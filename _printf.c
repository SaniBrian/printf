#include <stdio.h>
#include <stdarg.h>
#include "main.h"

/**
*_printf - produces output according to a format
*@format: format string
*Return: buffer printed size
*/

int _printf(const char *format, ...)
{
	va_list args;
	int printed = 0, printed_specifier, i;

	va_start(args, format);
	if (format == 0)
		return (-1);
	for (i = 0; format[i] != 0; i++)
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
			printed += 1;
		} else
		{
			printed_specifier = handler(format, args, &i);
			if (printed_specifier == -1)
				return (-1);
			printed += printed_specifier;
		}
	}
	va_end(args);

	return (printed);
}
