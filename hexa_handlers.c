#include "main.h"

/**
 * print_hexa_lower - Prints a hex in lowercase
 *
 * @argList: the list a of arguments
 *
 * Return: Number of chars printed
 */
int print_hexa_lower(va_list argList)
{
	long int n = va_arg(argList, unsigned long int);
	char *str = to_base(n, 16, 1);

	return (_puts(str));
}

/**
 * print_hexa_upper - Prints a hex in uppercase
 *
 * @argList: the list a of arguments
 *
 * Return: Number of chars printed
 */
int print_hexa_upper(va_list argList)
{
	long int n = va_arg(argList, unsigned long int);
	char *str = to_base(n, 16, 0);

	return (_puts(str));
}
