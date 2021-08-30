#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - this prints the last digit of the variable contained in n
* Description: using the main function this program  prints
* Last digit of n is x
* Return: 0
*/

int main(void)
{
	int n;
	int i;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	i = n % 10;
	if (i > 5)
	{
		printf("Last digit of %l is %l and is greater than 5\n", n, i);
	}
	else if (i == 0)
	{
		printf("Last digit of %l is %l and is 0\n", n, i);
	}
	else
	{
		printf("Last digit of %l is %l and is less than 6 and not 0\n", n, i);
	}
	return (0);
}
