#include "main.h"
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

/**
 * int_handler - handles the integers in placed in the string
 * @value: the name of the integer
 *
 * Return: Always 0
 */
int int_handler(int value)
{
	int num_chars = 0;
	int char_count = 0;
	char int_str[20];
	int i;

	if (value < 0)
	{
	_putchar('-');
	char_count++;
	value = -value;
	}
	do {
	int_str[num_chars++] = (value % 10) + '0';
	value /= 10;
	}

	while (value != 0);
	for (i = num_chars - 1; i >= 0; i--)
	{
	_putchar(int_str[i]);
	char_count++;
	}
	return (char_count);
}
