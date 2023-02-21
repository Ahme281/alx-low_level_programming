#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Prints if number is positive , negativeve or zero
 * Retutn: Always (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is nagative\n", n);
	}
	return (0);
}
