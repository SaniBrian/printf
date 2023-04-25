#include "main.h"
#include <stdlib.h>
/**
*print_non_printable - prints non printable characters
*@args: current argument
*Return: print size
*/

int print_non_printable(va_list args)
{
	char *str, *ptr, *tmp;
	int size = 0, i, j, k;

	ptr = va_arg(args, char *);
	if (ptr == NULL)
		str = "(null)";
	else
		str = ptr;
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] < 32 || str[i] >= 127)
		{
			_putchar(92);/**Printing '\' */
			_putchar('x');
			size = size + 2;
			j = str[i];
			if (j < 16)
			{
				_putchar('0');
				size = size + 1;
			}
			tmp = hexa_num_base(j, 'u');
			for (k = 0; tmp[k] != 0; k++)
			{
				_putchar(tmp[k]);
			}
			size = size + k;
		}
		else
		{
			_putchar(str[i]);
			size++;
		}
	}
	return (size);
}
