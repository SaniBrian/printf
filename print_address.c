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
	char *ptr_;
	int size;

	if (str != NULL)
	{
		ptr_ = str;
		_putchar('0');
		_putchar('x');
	}
	else
	{
		ptr_ = "(nil)";
	}
	for (size = 0; ptr_[size] != '\0'; size++)
	{
		_putchar(ptr_[size]);
	}
	if (str != NULL)
		return (size + 2);
	else
		return (size);
}
