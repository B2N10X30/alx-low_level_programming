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
	printf("Size of char: %lu bytes(s)\n", sizeof(c));
	printf("Size of int: %lu bytes(s)\n", sizeof(e));
	printf("Size of long int: %lu bytes(s)\n", sizeof(ie));
	printf("Size of long long: %lu bytes(s)\n", sizeof(lie));
	printf("Size of float: %lu bytes(s)\n", sizeof(fl));
	return (0); 
}
