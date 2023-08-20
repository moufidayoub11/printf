#include "main.h"

/**
 * print_pointer - Prints a pointer
 *
 * @argList: the list a of arguments
 *
 * Return: Number of chars printed
 */
int print_pointer(va_list argList)
{
	unsigned long int pointer = va_arg(argList, unsigned long int);
	char *parsed_p;
	int i = 0;

	if (!pointer)
		return (_puts("(nil)"));
	parsed_p = to_base(pointer, 16, 1);
	i += _puts("0x");
	i += _puts(parsed_p);
	return (i);
}

/**
 * print_rev - Prints a string in reverse
 *
 * @argList: the list a of arguments
 *
 * Return: Number of chars printed
 */
int print_rev(va_list argList)
{
	int i = 0, j;
	char *s = va_arg(argList, char *);

	if (!s)
		s = "(null)";

	while (s[i])
		i++;

	for (j = i - 1; j >= 0; j--)
		_putc(s[j]);

	return (i);
}

/**
 * print_rot13 - Prints a string with rot13 encreption
 *
 * @argList: the list a of arguments
 *
 * Return: Number of chars printed
 */
int print_rot13(va_list argList)
{
	int i, j;
	char normal[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	char *s = va_arg(argList, char *);

	for (j = 0; s[j]; j++)
	{
		if (s[j] < 'A' || (s[j] > 'Z' && s[j] < 'a') || s[j] > 'z')
			_putc(s[j]);
		else
		{
			for (i = 0; i <= 52; i++)
			{
				if (s[j] == normal[i])
					_putc(rot13[i]);
			}
		}
	}

	return (j);
}
