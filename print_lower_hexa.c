#include "main.h"
#include <stdlib.h>
/**
*print_lower_hexa - prints hexadecimal lowercase
*@args: current argument
*Return: print size
*/


int print_lower_hexa(va_list args)
{
	unsigned int n = va_arg(args, unsigned int);
	char *str, *ptr;
	int size;

	ptr = num_base(n, 16);
	if (ptr != NULL)
	{
		str = ptr;
	} else
	{
		str = "NULL";
	}
	for (size = 0; str[size] != '\0'; size++)
	{
		_putchar(str[size]);
	}
	return (size);
}
