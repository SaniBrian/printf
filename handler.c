#include "main.h"
#include <stdlib.h>
/**
*handler - handles format specier
*@format: printf format
*@args: printf current argument
*@i: current format loop index
*Return: size of specifier printed size
*/

int handler(const char *format, va_list args, int *i)
{
	int j, printed = 0;

	formatter specifiers[] = {
		{'c', print_char},
		{'s', print_string},
		{'d', print_integer},
		{'i', print_integer},
		{'u', print_unsigned_int},
		{'o', print_oct},
		{'b', print_binary},
		{'x', print_lower_hexa},
		{'X', print_upper_hexa},
		{'p', print_address},
		{'r', print_reverse},
		{'0', NULL}
	};
	*i = *i + 1;
	if (format[*i] == '\0')
		return (-1);
	if (format[*i] == '%')
	{
		_putchar('%');
		return (1);
	}
	for (j = 0; specifiers[j].type != '0'; j++)
	{
		if (specifiers[j].type == format[*i])
		{
			printed = specifiers[j].specifier_function(args);
			return (printed);
		}
	}
	_putchar(format[*i]);
	return (1);
}
