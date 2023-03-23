#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * struct fmt - a format type and function to print it
 * @type: the format type
 * @func: the function to print it
 */
typedef struct fmt
{
	char *type;
	void (*func)(va_list);
} fmt_t;
/**
 * print_int - prints an int
 * @args: the list of arguments
 *
 * Return: nothing
 */
void print_int(va_list args)
{
	printf("%d", va_arg(args, int));
}
/**
 * print_char - prints a char
 * @args: the list of argument
 * Return: nothing
 */
void print_char(va_list args)
{
	printf("%c", va_arg(args, int));
}

/**
 * print_float - prints a float
 * @args: the list of arguments
 * Return: nothing
 */
void print_float(va_list args)
{
	printf("%f", va_arg(args, double));
}
/**
 * print_string - prints a string
 * @args: the list of arguments
 * Return: nothing
 */
void print_string(va_list args)
{
	char *str = va_arg(args, char *);

	if (str == NULL)
		str = "(nil)";
	printf("%s", str);
}
/**
 * print_all - prints anything
 * @format: the list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0;
	int j;
	char *sep = "";
	fmt_t fmts[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string},
		{NULL, NULL}
	};

	va_start(args, format);
	while (format && format[i])
	{
		j = 0;
		while (fmts[j].type)
		{
			if (format[i] == fmts[j].type[0])
			{
				printf("%s", sep);

				fmts[j].func(args);
				sep = ", ";
				break;
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(args);
}
