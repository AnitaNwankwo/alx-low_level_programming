#include <stdio.h>
#include "main.h"

/**
 * print_line- printing lines
 * @n: number passed
 * Return: void
 */

void print_line(int n)
{
	int i;

	for (i = n; i > 0; i--)
		_putchar('_');
	_putchar('\n');
}
