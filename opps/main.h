#ifndef THE_MAIN_H
#define THE_MAIN_H
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * struct fmt - Structure for printing
 *
 * @fmt: The format specifier
 * @fn: The function associated.
 */

struct fmt
{
	char fmt;
	int (*fn)(va_list, char[], int, int, int, int);
};


/**
 * typedef struct fmt fmt_t - Struct op
 *
 * @fmt: The format.
 * @fm_t: The relative functions.
 */

typedef struct print
{
	char *t;

	int *(*f)(va_list);
} print_t;

/* PARENT PROTOTYPE */
int _printf(const char *format, ...);

/* OTHER FUNCTIONS*/

void print_buffer(char buffer[], int *buff_ind);
int _putchar(char c);
int print_c(va_list ar_list);
int (*get_func(char s))(va_list ar_list);
int print_s(va_list ar_list);
int print_d(va_list ar_list);
int print_i(va_list ar_numlist);
int print_b(va_list binary_list);
int print_u(va_list ar_list);
int print_o(va_list ar_list);
int print_x(va_list ar_list);
int print_X(va_list ar_list);
int print_p(va_list p);
int print_S(va_list S);
int print_r(va_list r);
int print_R(va_list R);

#endif
