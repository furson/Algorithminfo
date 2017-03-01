#include <stdio.h>

int main()
{
    int count = 0;
    char c;
    while((c = getchar()) != EOF)
    {
        if (c == '"')
        {
            if (!count)
            {
                count = 1;
                putchar('`');
                putchar('`');
            }
            else
            {
                count = 0;
                putchar('\'');
                putchar('\'');
            }
        }
        else
            putchar(c);
    }
    return 0;
}
