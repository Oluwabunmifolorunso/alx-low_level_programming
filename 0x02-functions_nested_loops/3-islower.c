#include "main.h"

/**
 * _islower - function that checks for lowercase character
 * @c: The character to print
 * Return: 1 if letter is lowercase, 0 if it is not
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'Z')
		return (1);
	else
		return (0);

}
