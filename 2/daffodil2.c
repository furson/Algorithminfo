#include <stdio.h>
#include <math.h>

int main()
{
    int hund, ten, one;
    int num;

    for (hund = 1; hund <= 9; ++hund)
        for (ten = 0; ten <= 9; ++ten)
            for (one = 0; one <= 9; ++one)
                if ((num = hund * 100 + ten * 10 + one) == pow(hund, 3) + pow(ten, 3) + pow(one, 3))
                    printf("%d\n", num);

    return 0;
}
