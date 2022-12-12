#include <stdio.h>
/**
 * main - program that prints possible different combinations of three digits
 * Return: Always 0
 */
int main(void)
{
	int o;
	int t;
		for (o = 0; o <= 99; o++)
	{
		for (t = 0; t <= 99; t++)
		{
			if (t > o)
			{
				putchar(o / 10 + '0');
				putchar(o % 10 + '0');
				putchar(' ');
				putchar(t / 10 + '0');
				putchar(t % 10 + '0');
				if (o * 100 + t != 9899)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

