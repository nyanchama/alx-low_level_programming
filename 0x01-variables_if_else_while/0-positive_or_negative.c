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
	n = rand() - RAND_MAX / 2;
	
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
<<<<<<< HEAD
		printf("%d is positive\n", n);
=======
		printf("%d is positive", n);
>>>>>>> f4f9121d2133408c6e11e47439187d70f7b5d103
	}
	return (0);
}
