#include <stdio.h>

/**
 * _islower - check if a character is lowercase
 * @c: argument to be checked
 * Return: 1 if c is lower or 0 if otherwise
 */

int _islower(int c)
{
	if (c >= 97 && c <= 123)
		return (1);
	return (0);
}
