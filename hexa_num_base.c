#include "main.h"

/**
*hexa_num_base - converts integer to base n_base
*@n: number
*@n_base: base to convert to
*Return: char
*/

char *hexa_num_base(unsigned long n, int n_base)
{
	static char *chars = "0123456789abcdef";
	static char buf[50];
	char *str;

	str = &buf[49];
	*str = '\0';
	do {
		*--str = chars[n % n_base];
		n /= n_base;
	} while (n != 0);
	return (str);
}
