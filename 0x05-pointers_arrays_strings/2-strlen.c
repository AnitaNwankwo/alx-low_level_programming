#include <stdio.h>

/**
 * _strlen - calculate the length of a string
 * @s: pointer variable
 * Return: size of the string
 */

int _strlen(char *s)
{
	int i;

	for (i = 0; *s != '\0'; i++)
		s++;
	return (i);
}
