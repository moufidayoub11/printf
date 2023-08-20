#include "main.h"

/**
 * print_pointer - Prints a pointer
 *
 * @argList: the list a of arguments
 *
 * Return: Number of chars printed
 */
int print_pointer(va_list l)
{
	unsigned long int pointer = va_arg(l, unsigned long int);
	char *parsed_p;
	int i = 0;

	if (!pointer)
		return (_puts("(nil)"));
	parsed_p = to_base(pointer, 16, 1);
	i += _puts("0x");
	i += _puts(parsed_p);
	return (i);
}