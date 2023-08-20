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

	return (write(1, &c, 1));
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
	int length = 0;
	char *str = va_arg(argList, char *);

	if (str == NULL)
		str = "(null)";

	while (str[length] != '\0')
		length++;

	return (write(1, str, length));
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

	return (write(1, "%%", 1));
}
