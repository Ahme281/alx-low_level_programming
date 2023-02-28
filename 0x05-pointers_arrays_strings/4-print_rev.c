#include "main.h"
/**
 * print_rev - a function that prints a string, in reverse,
 * followed by a new line
 * @s: string was printed in reverse
 *Return: 0
 */
void print_rev(char *s)
{
	while (*s != '\0')
		{
			_putchar(*s--);
		}
			_putchar('\n');
}
