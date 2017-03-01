#include <stdio.h>
#include <math.h>

#define NUMINIT 100
#define NUMMAX 999

int main()
{
    int num;
    int one, ten, hund;

    for (num = NUMINIT; num <= NUMMAX; ++num)
    {
        hund = num / 100;
        ten = (num % 100) / 10;
        one = num % 10;

        if (num == pow(hund, 3) + pow(ten, 3) + pow(one, 3))
            printf("%d\n", num);
    }

    return 0;
}
