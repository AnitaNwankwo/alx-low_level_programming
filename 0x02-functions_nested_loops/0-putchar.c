#include <stdio.h>
#include "main.h"

/**
 * main - This program prints _putchar to the screen
 * Return: 0
 */

int main(void)
{
	char *text = "_putchar";
	int i;

	for (i = 0; text[i] != '\0'; i++)
	{
		_putchar(text[i]);
	}
	_putchar('\n');
	return (0);
}
