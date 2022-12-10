#include <stdio.h>

/**
 * main - How to make lowercase with putchar
 * Return: Always 0
 */
int main(void)
{
	char sm;

	for (sm = 'a'; sm <= 'z'; sm++)
	{
		putchar(sm);
	}
	{
		putchar("\n");
	}
	return (0);
}
