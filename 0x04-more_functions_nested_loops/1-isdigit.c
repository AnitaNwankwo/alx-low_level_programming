#include <stdio.h>

/**
 * _isdigit - checking for digits
 * @c: argument passed
 * Return: 1 if c is digit or 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
