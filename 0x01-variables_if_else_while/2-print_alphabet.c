#include <stdio.h>

/**
 * main - prints the alphabet in lowercase
 * Return: Always 0 (Success)
 */
int main(void)
{

	char sm;

	for (sm = 'a'; sm <= 'z'; sm++)
	{
		putchar(sm);
	}
	putchar('\n');
	return (0);
}
