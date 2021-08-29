#include <stdio.h>

/**
 *main - print the argument in the printf function
 *Description: This program prints usin the main function
 *Return: 0
**/

int main(void)

{
	char c;
	int e;
	long ie;
	long long lie;
	float fl;
	printf("Size of a char: %lu bytes(s)\n", sizeof(c));
	printf("Size of an int: %lu bytes(s)\n", sizeof(e));
	printf("Size of a long int: %lu bytes(s)\n", sizeof(ie));
	printf("Size of a long long int: %lu bytes(s)\n", sizeof(lie));
	printf("Size of a float: %lu bytes(s)\n", sizeof(fl));
	return (0); 
}
