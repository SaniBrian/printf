#include "main.h"

/**
*num_base - converts integer to base n_base
*@n: number
*@n_base: base to convert to
*Return: char
*/

char *num_base(long int n, int n_base)
{
	static char *chars = "0123456789abcdef";
	static char buf[50];
	char *str, sign = 0;
	unsigned long num;

	if (n < 0)
	{
		sign = '-';
		num = -n;
	} else
	{
		num = n;
	}
	str = &buf[49];
	*str = '\0';

	do {
		*--str = chars[num % n_base];
		num /= n_base;
	} while (num != 0);
	if (sign != 0)
	{
		*--str = sign;
	}
	return (str);
}
