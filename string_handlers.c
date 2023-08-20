#include "main.h"

/**
 * print_character - Prints a char
 *
 * @argList: the list a of arguments
 *
 * Return: Number of chars printed
 */

int print_character(va_list argList)
{
	char c = va_arg(argList, int);

	return (_putc(c));
}

/**
 * print_string - Prints a string
 *
 * @argList: the list a of arguments
 *
 * Return: Number of chars printed
 */
int print_string(va_list argList)
{
	char *str = va_arg(argList, char *);

	if (str == NULL)
		return (_puts("(null)"));

	return (_puts(str));
}

/**
 * print_percent_sign - Prints a string
 *
 * @argList: the list a of arguments
 *
 * Return: Number of chars printed
 */
int print_percent_sign(va_list argList)
{
	UNUSED(argList);

	return (_putc('%'));
}
