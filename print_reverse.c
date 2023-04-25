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
	char temp;
	int i,j, size;

	if (ptr == NULL)
	{
		ptr = "NULL";
	}
	for (size = 0; ptr[size] != '\0'; size++)
		;
	for (i = 0, j = size - 1; i < j; i++, j--)
	{
		temp = ptr[i];
		ptr[i] = ptr[j];
		ptr[j] = temp;
	}
	for ( i = 0; ptr[i] != '\0'; i++)
	{
		_putchar(ptr[i]);
	}
	return (size);
}
