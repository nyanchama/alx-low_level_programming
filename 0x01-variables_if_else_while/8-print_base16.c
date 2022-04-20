#include <stdio.h>

/**
 * main - print base 16 numbers
 *
 * return: Always 0 (success)
 */
int main(void)
{
	char c;

	for (c = '0'; c <= '9'; c ++)
	{
		putchar(c);
	}

	for (c = 'a'; c <= 'f'; c ++)
	{
		putchar(c);
	}

	putchar('\n');

	return (0);
}