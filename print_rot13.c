#include "main.h"
#include <stdlib.h>
/**
*print_rot13 - encodes strings using rot13
*@args: current argument
*Return: print size
*/
int print_rot13(va_list args)
{
	char *ptr;
	char *a;
	int i, j;
	char alp[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char alphR[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	ptr = va_arg(args, char *);
	if (ptr != NULL)
		a = ptr;
	else
		a = "(ahyy)";
	for (i = 0; a[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (a[i] == alp[j])
			{
				_putchar(alphR[j]);
				break;
			}
		}
		if (alp[j] == '\0')
			_putchar(a[i]);
	}
	return (i);
}
