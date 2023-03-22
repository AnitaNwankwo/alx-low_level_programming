#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - printing the last digit
 * @n: argument passed
 * Return: last digit
 */

int print_last_digit(int n)
{
	if (n < 0)
		n = n * -1;
	n = n % 10;
	_putchar('0' + n);
	return (n);
}
