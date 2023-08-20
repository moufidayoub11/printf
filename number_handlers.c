#include "main.h"

/**
 * print_integer - Prints a number
 *
 * @argList: the list a of arguments
 *
 * Return: Number of chars printed
 */
int print_integer(va_list argList)
{
	long int n = va_arg(argList, int);
	unsigned long int num;
	char buffer[BUFFER_SIZE];
	int printed = 0, i = 0, j;

	if (n == 0)
	{
		_putchar('0');
		return (1);
	}

	num = (unsigned int)n;
	if (n < 0)
	{
		_putchar('-');
		num = (unsigned long int)((-1) * n);
		printed++;
	}

	while (num > 0)
	{
		buffer[i++] = (num % 10) + '0';
		num /= 10;
	}

	for (j = i - 1; j >= 0; j--)
	{
		_putchar(buffer[j]);
		printed++;
	}

	return (printed);
}
