#include <stdio.h>

/**
 * main - print alphabets except q and e
 *
 * return: Always (success)
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c ++)
	{
		if (c != 'e' && c != 'q')
		{
			putchar(c);
		}
	}

	putchar('\n');

	return (0);

}
