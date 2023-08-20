#include "main.h"

/**
 * _puts - Prints a string
 *
 * @s: the string to print
 * @len: the length of s
 *
 * Return: Number of chars printed
 */
int _puts(char *s, int len)
{
	return (write(1, s, len));
}

/**
 * _putchar - Prints a string
 *
 * @c: the char to print
 *
 * Return: Number of chars printed
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
