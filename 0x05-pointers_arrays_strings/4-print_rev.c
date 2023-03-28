#include <stdio.h>
#include "main.h"

/**
 * print_rev - printing a string in reverse
 * @s: pointer variable
 * Return: nothing
 */

void print_rev(char *s)
{
	int i, j;

	for (i = 0; *s != '\0'; i++)
		s++;
	for (j = i; j >= 0; j--)
		_putchar(*s--);
	_putchar('\n');
}
