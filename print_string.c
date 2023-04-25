#include "main.h"
#include <stdlib.h>
/**
*print_string - prints string specifier
*@args: current argument
*Return: print size
*/

int print_string(va_list args)
{
	char *ptr;
	char nill[] = "(null)";
	int i;
	int size;

	ptr = va_arg(args, char *);
	if (ptr == NULL)
	{
		for (i = 0; nill[i]; i++)
		{
			_putchar(nill[i]);
		}
		return (6);
	}
	else
	{
		for (size = 0; ptr[size] != '\0'; size++)
		{
			_putchar(ptr[size]);
		}
		return (size);
	}
}
