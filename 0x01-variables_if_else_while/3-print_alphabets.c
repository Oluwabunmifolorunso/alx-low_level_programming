#include <stdio.h>

/**
 * main - program that prints the alphabet in lowercase, and then in uppercase
 * Return: Always 0
 */

int main(void)
{
	char az;

	for (az = 'a'; az <= 'z'; az++)
	{
		putchar(az);
	}
	for (az = 'A'; az <= 'Z'; az++)
	{
		putchar(az);
	}
	putchar('\n');
	return (0);
}
