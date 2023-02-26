#include <stdio.h>

/**
 * main -  prints all possible combinations of two two-digit numbers
 * Return: 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 0; i < 99; i++)
	{
		putchar("00 ");
		putchar(i);
		putchar(",");
		
	}
	return (0);
}
