#include <stdio.h>
#include "main.h"

/**
 * print_diagonal- printing lines
 * @n: number passed
 * Return: void
 */

void print_diagonal(int n)
{
	int i, j;

	if (n > 1)
	{
		for (i = 1; i <= n; i++)
		{
			for (j = 0; j < i; j++)
			{
				if (j == i - 1)
				{
					_putchar('\\');
					continue;
				}
				_putchar(' ');
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
