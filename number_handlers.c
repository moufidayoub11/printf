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
		_putc('0');
		return (1);
	}

	num = (unsigned int)n;
	if (n < 0)
	{
		_putc('-');
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
		_putc(buffer[j]);
		printed++;
	}

	return (printed);
}

/**
 * print_binary - Prints a binary
 *
 * @argList: the list a of arguments
 *
 * Return: Number of chars printed
 */
int print_binary(va_list argList)
{
	unsigned int number, a32bas, i, sum;
	unsigned int bits_buffer[32];
	int count;

	number = va_arg(argList, unsigned int);
	a32bas = 2147483648; /* all 32 bits are set*/
	bits_buffer[0] = number / a32bas;
	for (i = 1; i < 32; i++)
	{
		a32bas /= 2;
		bits_buffer[i] = (number / a32bas) % 2;
	}

	for (i = 0, sum = 0, count = 0; i < 32; i++)
	{
		sum += bits_buffer[i];
		if (sum || i == 31)
		{
			char z = '0' + bits_buffer[i];

			_putc(z);
			count++;
		}
	}
	return (count);
}

/**
 * print_uns_integer - Prints an unsigned number
 *
 * @argList: the list a of arguments
 *
 * Return: Number of chars printed
 */
int print_uns_integer(va_list argList)
{
	long int n = va_arg(argList, unsigned long int);
	char buffer[BUFFER_SIZE];
	int printed = 0, i = 0, j;

	if (n == 0)
	{
		_putc('0');
		return (1);
	}

	while (n > 0)
	{
		buffer[i++] = (n % 10) + '0';
		n /= 10;
	}

	for (j = i - 1; j >= 0; j--)
	{
		_putc(buffer[j]);
		printed++;
	}

	return (printed);
}

/**
 * print_octal_integer - Prints an octal number
 *
 * @argList: the list a of arguments
 *
 * Return: Number of chars printed
 */
int print_octal_integer(va_list argList)
{
	long int n = va_arg(argList, unsigned long int);
	char buffer[BUFFER_SIZE];
	int printed = 0, i = 0, j;

	if (n == 0)
	{
		_putc('0');
		return (1);
	}

	while (n > 0)
	{
		buffer[i++] = (n % 8) + '0';
		n /= 8;
	}

	for (j = i - 1; j >= 0; j--)
	{
		_putc(buffer[j]);
		printed++;
	}

	return (printed);
}
