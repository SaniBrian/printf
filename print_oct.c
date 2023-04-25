#include "main.h"
#include <stdlib.h>
/**
*print_oct- prints octal specifier
*@args: current argument
*Return: print size
*/
int print_oct(va_list args)
{
	int size;
	char *buff;
	char *buffer;

	buff = num_base(va_arg(args, unsigned int), 8);
	if (buff != NULL)
	{
		buffer = buff;
	} else
	{
		buffer = "(null)";
	}

	for (size = 0; buffer[size] != '\0'; size++)
	{
		_putchar(buffer[size]);
	}
	return (size);
}
