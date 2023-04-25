#include <stdlib.h>
#include "main.h"
/**
 * print_address - prints a pointer/address specifier
 * @args: current argument
 * Return: printed size
 */
int print_address(va_list args)
{
	int size = 0;
	char *er = "(nil)";
	char *str;

	str = hexa_num_base(va_arg(args, unsigned long int), 'l');
	if (_strcmp(str, "0") == 0)
	{
		size = print_str(er);
		return (size);
	}
	_putchar('0');
	_putchar('x');
	size = size + 2;
	if (_strcmp(str, "-1") == 0)
		size = size + print_str("ffffffffffffffff");
	else
		size = size + print_str(str);
	return (size);
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

/**
*_strcmp - compares two string
*@s1: first string
*@s2: second string
*Return: 0 if true, non zero value if false
*/
int _strcmp(char *s1, char *s2)
{
		int i;

		for (i = 0; s1[i] != '\0'; i++)
		{
			if (s1[i] != s2[i])
				return (s1[i] - s2[i]);
		}
		return (0);
}
