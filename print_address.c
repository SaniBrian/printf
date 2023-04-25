#include <stdlib.h>
#include "main.h"
/**
 * print_address - prints a pointer/address specifier
 * @args: current argument
 * Return: printed size
 */
int print_address(va_list args)
{
	int size;
	char *er = "(nil)";
	char *str;

	str = hexa_num_base(va_arg(args, unsigned long int), 'l');
	if (str == NULL)
	{
		size = print_str(er);
		return (size);
	}

	_putchar('0');
	_putchar('x');
	size = print_str(str);
	return (size + 2);
}

/**
*print_str - print string with _putchar
*@str: string to print
*Return: print size
*/
int print_str(char *str)
{
	int size;

	for (size = 0; str[size] != '\0'; size++)
	{
		_putchar(str[size]);
	}
	return (size);
}
