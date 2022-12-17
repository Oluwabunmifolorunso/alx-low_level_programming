#include "main.h"
#include <stdio.h>

/**
 * _isupper - function that checks for uppercase character
 * @c: The character to print
 * Return: 1 if c is uppercase, 0 otherwise
 */

int _isupper(int c)
{
	if (c >= 65 && c < 91)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
