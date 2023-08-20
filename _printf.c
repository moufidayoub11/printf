#include "main.h"

/**
 * _printf - My own printf function
 *
 * @format: the format string
 *
 * Return: the number of printed chars.
 */
int _printf(const char *format, ...)
{
	int i, printed = 0, printed_chars = 0;
	va_list list;

	if (format == NULL)
		return (-1);

	va_start(list, format);

	for (i = 0; format && format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
			printed_chars++;
		}
		else
		{
			++i;
			printed = printf_helper(format, i, list);
			if (printed == -1)
				return (-1);
			printed_chars += printed;
		}
	}

	va_end(list);

	return (printed_chars);
}
