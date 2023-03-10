#include "main.h"

/**
 * check_prime - helper function to check if n is prime
 * @n: number to check
 * @i: current divisor to check
 *
 * Return: 1 if n is prime, 0 otherwise
 */
int check_prime(int n, int i)
{
	if (n <= 1)
		return (0);
	if (i * i > n)
		return (1);
	if (n % i == 0 || n % (i + 2) == 0)
		return (0);
	return (check_prime(n, i + 6));
}
/**
 * is_prime_number - checks if a number is prime
 * @n: number to check
 *
 * Return: 1 if n is prime, 0 otherwise
 */
int is_prime_number(int n)
{
	if (n <= 3)
		return (n > 1);
	if (n % 2 == 0 || n % 3 == 0)
		return (0);
	return (check_prime(n, 5));
}
