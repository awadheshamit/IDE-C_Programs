#include <stdio.h>
void main()
{
    char c = 'A';
    while (c <= 'Z')
    {
        if (c % 2 == 1)
        {
            putchar(c);
        }
        else
        {
            printf("%c", c + 32);
        }
        c++;
    }
}