#include "main.h"
#include <stdlib.h>
/**
*print_unsigned_int - prints unsigned int
*@args: current argument
*Return: print size
*/

int print_unsigned_int(va_list args)
{
	char *str;
	char *buf;
	int size;
	unsigned int n = va_arg(args, unsigned int);

	str = num_base(n, 10);
	if (str != NULL)
	{
		buf = str;
	} else
	{
		buf = "(null)";
	}
	for (size = 0; buf[size] != '\0'; size++)
	{
		_putchar(buf[size]);
	}
	return (size);
}
