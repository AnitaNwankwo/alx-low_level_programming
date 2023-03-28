#include <stdio.h>
#include "main.h"

/**
 * _puts - printing to screen
 * @str: string pointer
 * Return: nothing
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
