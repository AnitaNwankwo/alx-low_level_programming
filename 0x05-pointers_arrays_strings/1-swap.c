#include <stdio.h>

/**
 * swap_int - swapping two pointer variables
 * @a: pointer variable one
 * @b: pointer variable two
 * Return: nothing
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
