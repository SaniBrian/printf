#include "main.h"
#include <stdlib.h>
/**
 *print_reverse - prints the reversed string
 *@args: argument
 *Return: number of printed characters
*/
int print_reverse(va_list args)
{
	char *ptr = va_arg(args, char*);
	char nill[] = "(llun)";
	unsigned int i;
	int j;

	if (ptr == NULL)
	{
		for (i = 0; nill[i]; i++)
			_putchar(nill[i]);
		return (6);
	}
	for (i = 0; ptr[i]; i++)
		;
	for (j = i - 1; j >= 0; j--)
	{
		_putchar(ptr[j]);
	}
	return (i);
}
