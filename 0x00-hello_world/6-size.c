#include <stdio.h>

/**
* main - print the string in the put function
*
* Description: using the main function
* this program prints the size of the different types on a linux 64bit machine
* Return: 0
*/
int main(void)
{
char c;
int e;
long ie;
long long lie;
float fl;

printf("Size of a char: %ld byte(s)\n", sizeof(c));
printf("Size of an int: %ld byte(s)\n", sizeof(e));
printf("Size of a long int: %ld byte(s)\n", sizeof(ie));
printf("Size of a long long int: %ld byte(s)\n", sizeof(lie));
printf("Size of a float: %ld byte(s)\n", sizeof(fl));
return (0);
}
