#include <stdio.h>
/**
 * main - main function uses the while loop to check if letter in to check if it
 * upper case or lowercase then increment
 * Description: prints the uppercase and lowercase alphabet.
 * Return: 0
*/

int main(void)
{
	char c = 'a';


	while (c <= 'z')
	{
		putchar(c);
		c++;
	}

	c = 'A';

	while (c <= 'Z')
	{
		putchar(c);
		c++;
	}

	putchar('\n');

	return (0);
}
