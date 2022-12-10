#include <stdio.h>

/**
 * main - program that prints the alphabet in lowercase, and then in uppercase
 * Return: Always 0
 */

int main(void)
{
	char sl;
	char bl;

	for (sl = 'a'; sl <= 'z'; sl++)
	for (bl = 'A'; bl <= 'Z'; bl++)
	{
		putchar(sl);
		putchar(bl);
	}
	putchar('\n');
	return (0);
}
