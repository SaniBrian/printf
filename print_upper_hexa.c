#include "main.h"
#include <stdlib.h>
/**
*print_upper_hexa - prints hexadecimal uppercase
*@args: current argument
*Return: print size
*/


int print_upper_hexa(va_list args)
{
	unsigned int n = va_arg(args, unsigned int);
	char *str, *ptr;
	int size;

	ptr = num_base(n, 16);
	if (ptr != NULL)
	{
		str_upper(ptr);
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

/**
 *str_upper - converts lowercase to uppercase
 *@str: pointer argument
 *Return: void
 */
void str_upper(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
	}
}
