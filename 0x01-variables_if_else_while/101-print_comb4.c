#include <stdio.h>

/**
 * main - print 3 numbers
 * Return: Always (success)
 */
int main(void)
{
	int i, k, l;

	for (i = '0'; i <= '9'; i++)
	{
		for (k = '0'; k <= '9'; k++)
		{
			for (l = '0'; l <= '9'; l++)
			{

				if (i < k && k < l)
				{
					putchar(i);
					putchar(k);
					putchar(l);

					if (i != '7')
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}

	putchar('\n');

	return (0);
}

