#ifndef _PRINTF_H
#define _PRINTF_H

#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>

#define UNUSED(x) (void)(x)

/**
 * struct FormatSpecifier - Struct to represent a format specifier
 *
 * @specifier: the format specifier character.
 * @action: the function associated with the specifier.
 */
typedef struct FormatSpecifier
{
	char specifier;
	int (*action)(va_list);
} fs_t;

/* Printing Functions */
int _printf(const char *format, ...);
int printf_helper(const char *format, int currentIndex, va_list argList);

int print_character(va_list argList);
int print_string(va_list argList);
int print_percent_sign(va_list argList);

#endif /* _PRINTF_H */
