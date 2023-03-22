#include <stdio.h>

/**
 * _abs - returning the absolute value
 * @n: argument passed
 * Return: absolute value
 */

int _abs(int n)
{
	if (n < 0)
	{
		n = n * -1;
		return (n);
	}
	return (n);
}
