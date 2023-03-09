#include "main.h"
/**
 * sqrt_helper - helper function to find square root recursively
 * @n: number to find square root of
 * @i: integer to test if it is square root of n
 * Return: natural square root of n or -1
 * if n has no natural square root
 */
int sqrt_helper(int n, int i)
{
	if (i * i > n)
	{
		return (-1);
	}
	if (i * i == n)
	{
		return (i);
	}
	return (sqrt_helper(n, i + 1));
}
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to find square root of
 *
 * Return: natural square root of n or -1 if n has no natural square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
		return (sqrt_helper(n, 0));
	}

