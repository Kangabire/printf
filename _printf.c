#include "main.h"
#include <stdarg.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * _putchar - writes a character to the standard output
 *@c: the character to write
 *Return: Nothing
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
/**
 * _strlen -  swaps the values of two integers.
 * @s: String input
 *
 * Return: Lenght of string
 */

int _strlen(char *s)
{
	int len = 0;

	if (s == NULL)
	{
		s = "(null)";
		return (0);
	}
	while (s)
	{
		len++;
		s++;
	}
	return (len);

}

/**
 * _puts - prints a string, followed by a new line, to stdout
 * @s: String input
 *
 * Return: void
 */

int _puts(char *s)
{
	int i = 0;
	int len = 0;

	while (s[i])
	{
		_putchar(s[i]);
		len++;
		i++;
	}
	return (len);
}

/**
 * _printf - it is a function that prints
 * @format:
 * @...: variable number of functions
 * Return: Nothing
 */
int _printf(const char *format, ...)
{
	va_list args;
	int print = 0;

	va_start(args, format);

	while (*format)
	{
		if (*format == '%')

		switch (*(++format))
		{
			case 'c':
				print += _putchar(va_arg(args, int));
				break;

			case 's':
				print += _puts(va_arg(args, char*));
				break;

			case '%':
				print += _putchar('%');
				break;
			case 'd':
			case 'i':
				print += int_handler(va_arg(args, int));
				break;
			case 'b':
				print += dec_to_binary(va_arg(args, int));
				break;
			default:
				print += _putchar(*format);
				break;

		}
	else
	{
		print += write(1, &(*format), 1);
	}
		format++;
	}
	va_end(args);

	return (print);
}
