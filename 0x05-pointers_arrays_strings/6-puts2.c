#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * puts2 - printig only half
 * @str: pointer variable
 */

void puts2(char *str)
{
	int len, i;

	len = strlen(str);

	for (i = 0; i < len; i = i + 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
