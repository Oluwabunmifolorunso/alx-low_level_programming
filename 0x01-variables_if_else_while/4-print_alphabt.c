#include <stdio.h>

/**
 * main - Print all the letters except q and e in lowercase
 * Return: Always 0
 */

int main(void)
{

	char sl;

	for (sl = 'a'; sl <= 'z'; sl++)
	{
		if (sl != 'e' && sl != 'q')
			putchar(sl);
	}
	putchar('\n');
	return (0);
}
