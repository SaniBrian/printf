#include "main.h"
#include <stdlib.h>
/**
*print_binary - prints ints in binary
*@args: current argument
*Return: print size
*/

int print_binary(va_list args)
{
	char *str;
	int size;

	str = num_base(va_arg(args, unsigned int), 2);
	for (size = 0; str[size] != '\0'; size++)
	{
		_putchar(str[size]);
	}
	return (size);
}
