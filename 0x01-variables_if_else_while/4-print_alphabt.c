#include <stdio.h>
/**
 * main - main function uses a nested loop to skip
 * Description: Prints all alphabets except specified
 * Return: 0
*/

int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		if (c != 'e' &&  c != 'q')
			putchar(c);
		c++;
	}
	putchar('\n');

	return (0);
}
