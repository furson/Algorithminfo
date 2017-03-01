#include <stdio.h>

int main()
{
    int x = 0, y = 0;
    int a = 0, b = 1;
    if (a)
        if (b)
            x++;
        else
            y++;
    printf("x is %d\n", x);
    printf("y is %d\n", y);
    return 0;
}
