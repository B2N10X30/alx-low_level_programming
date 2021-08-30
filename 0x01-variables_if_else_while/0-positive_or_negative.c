#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main -prints if the variable n is  positive, negative, or zero
* This program detects if an integer n is +ve, -ve or is zero
* by using the logic in the main function
* Return: 0
*/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
	{
		printf("%i is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%i is zero\n", n);
	}
	else
	{
		printf("%i is negative\n", n);
	}
	return (0);
}
