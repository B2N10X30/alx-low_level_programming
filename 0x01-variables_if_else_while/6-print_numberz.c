#include <stdio.h>
/**
 *main - the main function uses a for loop
 *Description: Prints all base 10 digits, which contains
 *one digits only
 *Return: 0
*/
int main(void)
{
int i;

for (i = 0; i < 10; i++)
{
putchar(i + '0');
}
putchar('\n');

return (0);
}
