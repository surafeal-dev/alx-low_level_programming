#include <stdio.h>

/**
 * main - a simple program that outputs 0-9 separated by commas
 *
 * Return: 0 on success
 */
int main()
{
    int d;
    int c;
    int a;
    int b;
    
    for (d = '0'; d <= '9'; d++)
    {
        for (c = '0'; c <= '8'; c++)
        {
            for (a = d; a <= '9'; a++)
            {
                for (b = c + 1; b <= '9'; b++)
                {
                    putchar(d);
                    putchar(c);
                    putchar(' ');
                    putchar(a);
                    putchar(b);
                    if (d != '9' || c != '8')
                    {
                        putchar(',');
                        putchar(' ');
                    }
                }
            }
        }
    }
    putchar('\n');
    return 0;
}
