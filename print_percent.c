#include "main.h"
/**
*print_percent - function that prints '%' specifier
*@args: unused in the function
*Return: print size
*/
int print_percent(va_list args)
{
	UNUSED(args);

	_putchar('%');
	return (1);
}
