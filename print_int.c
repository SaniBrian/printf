#include "main.h"
#include <stdlib.h>
/**
*print_integer - prints integer specifier
*@args: current argument
*Return: print size
*/
int print_integer(va_list args)
{
	int size;
	char *buff;
	char *buffer;

	buff = num_base(va_arg(args, int), 10);
	if (buff != NULL)
	{
		buffer = buff;
	} else
	{
		buffer = "NULL";
	}

	for (size = 0; buffer[size] != '\0'; size++)
	{
		_putchar(buffer[size]);
	}
	return (size);
}
