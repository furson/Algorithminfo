#include <stdio.h>
#define maxn 1000
int num[maxn];

int main()
{
    int n, count, max, min, sum;
    int secmax;
    double var;

    count = 0;
    sum = 0;
    max = -100000000;
    min = 100000000;
    flag = 1;

    while ((scanf("%d", &n) == 1) && (n != -1))
    {
        ++count;
        if (n > max) max = n;
        if (n < min) min = n;

        num[count - 1] = n;
        sum += n;
    }

    printf("Count is %d\n", count);
    printf("Max is %d\n", max);
    printf("Min is %d\n", min);
    printf("Average is %lf\n", (double)sum / count);
    return 0;
}
