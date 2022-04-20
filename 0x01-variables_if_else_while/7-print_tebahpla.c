#include <stdio.h>

/**
 * main - print the lowercase alphabets in reverse
 *
 * return: always 0 (success)
 */
int main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; c --)
	{
		putchar(c);
	}

	putchar('\n');

	return (0);
}
