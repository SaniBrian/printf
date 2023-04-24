#include <stdlib.h>
#include "main.h"
/**
 * print_address - prints a pointer/address specifier
 * @args: current argument
 * Return: printed size
 */
int print_address(va_list args)
{
	void *ptr = va_arg(args, void *);
	unsigned long int num = (unsigned long int) ptr;
	char *str = hexa_num_base(num, 'l');

	int size;

	_putchar('0');
	_putchar('x');
	for (size = 0; str[size] != '\0'; size++)
	{
		_putchar(str[size]);
	}
	return (size + 2);
}
