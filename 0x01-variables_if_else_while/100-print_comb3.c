#include <stdio.h>
/**
 * main - program that prints all possible different combinations of two digits
 * Return: Always 0
 */
int main(void)
{
	int a;
	int i;
		for (a = 48; a <= 56; a++)
	{
		for (i = a + 1; i <= 57; i++)
		{
			putchar(a);
			putchar(i);
			if (a != 56)
			{
				putchar(44);
				putchar(32);
			}
		}
	}
	putchar('\n');
	return (0);
}
