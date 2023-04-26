#include "main.h"
#include <stdio.h>
#include <unistd.h>
/**
 * _putchar - writes a character to the standard output
 *@c: the character to write
 *Return: Nothing
 */
int _putchar(char c)
{
        return (write(1, &c, 1));
}
