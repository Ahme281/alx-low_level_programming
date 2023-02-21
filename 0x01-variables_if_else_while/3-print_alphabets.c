#include <stdio.h>
/**
 * main - a program that prints the alphabet in lower and upper
 * Return: Always 0 (Success)
 */
int main(void)
{
	char low;

	for (low = 'a'; low <= 'z'; low++)
	{
		putchar(low);
	}
	for (low = 'A'; low <= 'Z'; low++)
	{
		putchar(low);
	}
		putchar('\n');
		return (0);
}
