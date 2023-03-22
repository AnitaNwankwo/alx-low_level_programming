#include <stdio.h>

/**
 * _isalpha - check if a character is lowercase
 * @c: argument to be checked
 * Return: 1 if c is lower or 0 if otherwise
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 123) || (c >= 65 && c <= 91))
		return (1);
	return (0);
}
