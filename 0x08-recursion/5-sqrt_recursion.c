#include "main.h"

/**
 * _sqrt_recursion - returns natural square root of a number
 * @n: input number
 * Return: natural square root or -1 if none
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (0);
	if (n == 1 || n == 4 || n == 9 || n == 16 || n == 25 ||
		n == 36 || n == 49 || n == 64 || n == 81 || n == 100)
	{
		return (_sqrt_recursion(n / _sqrt_recursion(n)));
	}
	return (_sqrt_recursion(n - (n % 10) * (n % 10)));
}
