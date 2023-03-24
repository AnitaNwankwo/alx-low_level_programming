#include <stdio.h>

/**
 * _isupper - checking for uppercase characters
 * @c: argument passed
 * Return: 1 if c is uppercase or 0 otherwise
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 91)
		return (1);
	return (0);
}
