#include <stdio.h>
#include "main.h"

/**
 * print_square- printing lines
 * @size: number passed
 * Return: void
 */

void print_square(int size)
{
	int i, j;

	if (size > 1)
	{
		for (i = 1; i <= size; i++)
		{
			for (j = 0; j < size; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
