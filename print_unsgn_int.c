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

	str = num_base(va_arg(args, unsigned int), 10);
	if (str != NULL)
	{
		buf = str;
	} else
	{
		buf = "NULL";
	}
	for (size = 0; buf[size] != '\0'; size++)
	{
		_putchar(buf[size]);
	}
	return (size);
}
