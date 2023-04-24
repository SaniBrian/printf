#include "main.h"
#include <stdlib.h>
/**
*print_string - prints string specifier
*@args: current argument
*Return: print size
*/

int print_string(va_list args)
{
	char *str;
	char *ptr;
	int size;

	ptr = va_arg(args, char *);
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
