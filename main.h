#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>


/**MAIN FUNCTION PROTOTYPE*/
int _printf(const char *format, ...);

/**STRUCT PROTOTYPE*/
/**
*struct spec - specifier struct
*@type: format
*@specifier_function: format function
*/
typedef struct specifier
{
	char type;

	int (*specifier_function)(va_list);
} formatter;

/**FUNCTION PROTOTYPES*/
int _putchar(char c);
char *num_base(long int n, int n_base);
int print_integer(va_list args);
int print_string(va_list args);
int print_char(va_list args);
int print_percent(va_list args);
int handler(const char *format, va_list args, int *i);
int print_binary(va_list args);
int print_unsigned_int(va_list args);


#endif
