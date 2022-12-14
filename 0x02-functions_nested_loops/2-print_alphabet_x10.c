#include "main.h"
/**
 * print_alphabet_x10 - function that prints 10x the alphabet, in lowercase
 */

void print_alphabet_x10(void)
{
	int ms;
	char sm;

	for (ms = 0; ms <= 9; ms++)
	{
		for (sm = 'a'; sm <= 'z'; sm++)
		{
			_putchar(sm);
		}
	}
	_putchar('\n');
}
