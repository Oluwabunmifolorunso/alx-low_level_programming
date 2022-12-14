#include "main.h"
#include <stdio.h>

/**
 * main - program that computes and prints the sum of all the multiples
 * Return: Always 0
 */

int main(void)

{
	int a, b;

	for (b = 0; b < 1024; ++b)
	{
		if ((b % 3 == 0) || (b % 5 == 0))
		a += b;
	}
	printf("%d\n", a);

	return (0);
}
