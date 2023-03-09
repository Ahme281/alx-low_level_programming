#include "main.h"
/**
 * _puts_recursion(*s) - a function that prints a string,
 * followed by a new line.
 * @s: the string
 * Return: the string
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
	_putchar('\n');
	return;
	}
	else
	{
	_putchar(*s);
	_puts_recursion(s + 1);
	}
}
