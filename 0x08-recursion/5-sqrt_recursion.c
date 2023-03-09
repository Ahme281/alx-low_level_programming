#include "main.h"
/* Helper function that returns 1 if n is a perfect square and 0 otherwise */
int is_perfect_square(int n)
{
	int i = 1;
	while (i * i < n)
	{
		i++;
	}
	return (i * i == n);
}
int _sqrt_recursion(int n)
{
	if (n  < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (n);
	if (is_perfect_square(n))
	{
		return _sqrt_recursion(n - 1) + 1;;
	}
	return -1;
}

