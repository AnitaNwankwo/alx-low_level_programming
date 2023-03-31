#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * rev_string - reverse a string
 * @s: pointer variable
 */

void rev_string(char *s)
{
	int i, len, div, temp;

	len = strlen(s);
	div = len / 2;

	for (i = 0; i < div; i++)
	{
		temp = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = temp;
	}

	s[len + 1] = '\0';
}
