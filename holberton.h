#ifndef _PRINTF_H_
#define _PRINTF_H_

#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h> /* For testing purposes only */
#include <limits.h>

/**
 * struct conversion_specification - Here's the code for conv spec structs
 * @spec: The conversion specifier
 * @print_func: Function pointer to handle particular specifier
 *
 * Description: This struct consists of a conversion specifier and a
 * handler for that specifier
 */

typedef struct conversion_specification
{
	char *spec;
	int * (*print_func)(va_list, int *);
} spec_t;

/* Printing ordinary characters */
int *print_ord_char(char c, int *sum);
int *print_per(int *sum);

/* Printing conversion specifications */
int *print_char(va_list args, int *sum);
int *print_str(va_list args, int *sum);
int *print_dec(va_list args, int *sum);
int *print_int(va_list args, int *sum);

/* Printf wrapper */
int _printf(const char *format, ...);

#endif /* _PRINTF_H_ */
