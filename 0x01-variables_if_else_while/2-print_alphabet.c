#include <stdio.h>
/**
 * main - main function uses the putchar to write unsigned char
 * Description: Prints the english alphabets in small case
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
	putchar('\n');

	return (0);
}
