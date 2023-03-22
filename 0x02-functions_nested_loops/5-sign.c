#include <stdio.h>
#include "main.h"

/**
 * print_sign - printing the signs of a number
 * @n: argument passed
 * Return: 1if greater than 0
 * or 0 if zero or -1 if lesser than zero
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
