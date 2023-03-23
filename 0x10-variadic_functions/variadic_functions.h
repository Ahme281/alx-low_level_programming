#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdarg.h>
/**
 * struct fmt - a format type and function to print it
 * @type: the format type
 * @func: the function to print
 */
typedef struct fmt
{
	char *type;
	void (*func)(va_list);
} fmt_t;
void print_char(va_list args);
void print_int(va_list args);
void print_float(va_list args);
void print_string(va_list args);
void print_all(const char * const format, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
int sum_them_all(const unsigned int n, ...);
int _putchar(char c);
#endif
