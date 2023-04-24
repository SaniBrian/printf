#include "main.h"
/**
*hexa_num_base - converts int to hexadecimal
*@num: int to convert
*@ch: lower or higher case determiner
*Return: string pointer
*/
char *hexa_num_base(unsigned long int num, char ch)
{
	static char buffer[9];
	int i = 0, len, digit;
	char temp;
	char alpha;

	if (ch == 'l')
		alpha = 'a';
	if (ch == 'u')
		alpha = 'A';
	do {
		digit = num % 16;
		if (digit < 10)
		{
			buffer[i++] = '0' + digit;
		} else
		{
			buffer[i++] = alpha + (digit - 10);
		}
		num = num / 16;
	} while (num > 0);
	buffer[i] = '\0';
	len = i;
	for (i = 0; i < (len / 2); i++)
	{
		temp = buffer[i];
		buffer[i] = buffer[len - i - 1];
		buffer[len - i - 1] = temp;
	}
	return (buffer);
}
