#include <stdio.h>
/**
 * main - program that prints possible different combinations of three digits
 * Return: Always 0
 */
int main(void)
{
	int o;
	int t;
	int h;
		for (o = 48; o < 56; o++)
	{
		for (t = 48; t < 56; t++)
		{
			if (t > o)
			{
				for (h = 48; h < 56; h++)
				{
					if (h > t)
					{
					putchar(o);
					putchar(t);
					putchar(h);
					if (o == 53 && t == 54 && h == 55)
					{
						break;
					}
				putchar(',');
				putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
