#include <stdio.h>

/**
 * main - program to print 0 to 9 with comma and space in between
 *
 * Return: Always (success);
 */
int main(void)
{
	int a;

	for (a = '0'; a <= '9'; a++)
	{
		putchar(a);

		if (a != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
