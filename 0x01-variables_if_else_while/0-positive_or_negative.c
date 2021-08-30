#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/* This program detects if an integer n is +ve, -ve or is zero
* by using the logic in the main function
* main - print if n is +ve,zero or -ve
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
