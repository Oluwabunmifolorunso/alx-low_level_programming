#include <stdio.h>
/**
 * main - program that prints possible combinations of single digits
 * Return: Always 0
 */
int main(void)
{
	int o;
		for (o = 0; o <= 9; o++)
		{
		putchar(o + '0');
		if (o < 9)
		{
		putchar(',');
		putchar(' ');
		}
		}
		putchar('\n');
		return (0);
}

