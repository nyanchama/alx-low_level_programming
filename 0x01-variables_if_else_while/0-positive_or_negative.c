#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * return: always 0 (success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - Rand_MAX / 2;
	
	if (n < 0);
	{
		printf("%d is negative\n", n);
	}
	else if (n == 0)
	{
		printf("%d is 0\n", n);
	}
	else
	{
		printf("%d is positive", n);
	}
	return (0);
}
