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
	char hexa_lower[] = "0123456789abcdef";
	char buffer[BUFFER_SIZE];
	int printed = 0, i = 0, j;

	if (n == 0)
	{
		_putc('0');
		return (1);
	}

	while (n > 0)
	{
		buffer[i++] = hexa_lower[(n % 16)];
		n /= 16;
	}

	for (j = i - 1; j >= 0; j--)
	{
		_putc(buffer[j]);
		printed++;
	}

	return (printed);
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
	char hexa_lower[] = "0123456789ABCDEF";
	char buffer[BUFFER_SIZE];
	int printed = 0, i = 0, j;

	if (n == 0)
	{
		_putc('0');
		return (1);
	}

	while (n > 0)
	{
		buffer[i++] = hexa_lower[(n % 16)];
		n /= 16;
	}

	for (j = i - 1; j >= 0; j--)
	{
		_putc(buffer[j]);
		printed++;
	}

	return (printed);
}
