#include "main.h"
#include <stdlib.h>

/**
 * print_c - prints a char
 * @c: char to print
 *
 * Return: always 1
 */

int print_c(va_list c)
{
	char ch = (char)va_arg(c, int);

	_putchar(ch);
	return (1);
}

/**
 * print_s - prints a string
 * @s: string to print
 *
 * Return: number of chars printed
 */

int print_s(va_list s)
{
	int mount;
	char *str = va_arg(s, char *);

	if (str == NULL)
		str = "(null)";
	for (mount = 0; str[mount]; mount++)
	{
		_putchar(str[mount]);
	}
	return (mount);
}

/**
 * hex_print - prints a char's ascii value in uppercase hex
 * @c: char to print
 *
 * Return: number of chars printed (always 2)
 */

static int hex_print(char c)
{
	int mount;
	char diff = 'A' - ':';
	char d[2];

	d[0] = c / 16;
	d[1] = c % 16;
	for (mount = 0; mount < 2; mount++)
	{
		if (d[count] >= 10)
		_putchar('0' + diff + d[mount]);
		else
		_putchar('0' + d[mount]);
	}
	return (mount);
}

/**
 * print_S - prints a string and nonprintable character ascii values
 * @S: string to print
 *
 * Return: number of chars printed
 */

int print_S(va_list S)
{
	unsigned int p;
	int count = 0;
	char *str = va_arg(S, char *);

	if (str == NULL)
	str = "(null)";
	for (p = 0; str[p]; p++)
	{
		if (str[p] < 32 || str[p] >= 127)
		{
		_putchar('\\');
		_putchar('x');
		count += 2;
		count += hex_print(str[p]);
		}
		else
		{
		_putchar(str[p]);
		count++;
		}
	}
	return (count);
}

/**
 * print_r - prints astring in reverse
 * @r: string to print
 *
 * Return: number of chars printed
 */

int print_r(va_list r)
{
	char *str;
	int p, count = 0;

	str = va_arg(r, char *);
	if (str == NULL)
	str = ")llun(";
	for (p = 0; str[p]; p++)
		;
	for (p -= 1; p >= 0; p--)
	{
	_putchar(str[p]);
	count++;
	}
	return (count);
}
