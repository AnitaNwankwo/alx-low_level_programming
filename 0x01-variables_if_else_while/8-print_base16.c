#include <stdio.h>

/**
 *main - print numbers in hex
 *Return: 0
 */
int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
		putchar(n + '0');
	for (n = 97; n < 103; n++)
		putchar(n);
	putchar('\n');

	return (0);
}
