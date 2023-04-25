#include "main.h"
#include <stdlib.h>

/**
 * print_R - prints a string in rot13
 * @R: string to print
 *
 * Return: number of chars printed
 */

int print_R(va_list R)
{
	char *str;
	unsigned int l, m;
	int count = 0;
	char in[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char out[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	str = va_arg(R, char *);
	if (str == NULL)
		str = "(ahyy)";
	for (i = 0; str[l]; l++)
	{
		for (j = 0; in[m]; m++)
		{
			if (in[m] == str[l])
			{
				_putchar(out[m]);
				count++;
				break;
			}
		}
		if (!in[m])
		{
			_putchar(str[l]);
			count++;
		}
	}
	return (count);
}
