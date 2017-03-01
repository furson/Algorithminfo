#include <stdio.h>
#define POSIMAX 30

int main(void)
{
    int i, num, sum;

    sum = num = 1;
    for (i = 0; i < POSIMAX; ++i)
    {
        sum += (num << 1);
        num = num << 1;
    }
    printf("Max positive number is %d\n", sum);
    printf("Max negative number is %d\n", num << 1);

    return 0;
}
