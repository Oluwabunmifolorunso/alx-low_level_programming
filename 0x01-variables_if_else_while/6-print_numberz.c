#include <stdio.h>

/**
 * main - program that prints all single digit numbers of base 10
 * Return: Always 0
 */

int main(void)
{
		int dig;
			for (dig = 0; dig < 10; dig++)
			putchar((dig % 10) + '0');
		putchar("\n");
		return (0);
}
