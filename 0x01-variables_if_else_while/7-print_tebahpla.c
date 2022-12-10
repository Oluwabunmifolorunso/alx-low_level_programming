#include <stdio>

/**
 * main - prints the lowercase alphabet in reverse
 * Return: Always 0
 */

int main(void)
{

		char le;
			for (le = 'Z'; le >= 'a'; le--)
				putchar(le);
			putchar('\n');
			return (0);
}
