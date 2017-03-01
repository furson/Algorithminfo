#include <stdio.h>
#include <math.h>

int main(void)
{
    double min, max = 1.0;
//    for (int i = 0; max >= 0.0; ++i)
//    {
//        max = max + pow(10, 305);
//        printf("max is %lf\n", max);
//    }
//    printf("max is %lf\n", max);
    min = max;
    for (int i = 0; min >= 0.0; ++i)
    {

        printf("min is %lf\n", min);
        min = max / 1000000.0;
    }
    return 0;
}
