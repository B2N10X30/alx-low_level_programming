#include <stdio.h>
#include "main.h"

int main(void)
{
    char fig[9] = {"H", "o", "l", "b", "e", "r", "t", "o", "n"};
    int c = 0;
    for (c < sizeof(fig); c++;)
    {
        putchar(fig[c]);
    }
    putchar("\n");

    return (0);
}
