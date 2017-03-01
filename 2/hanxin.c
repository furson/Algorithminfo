#include <stdio.h>

int main()
{
    int num, casenum;
    int trimod, fivemod, sevenmod;

    casenum = 0;
    while(scanf("%d", &trimod) == 1)
    {
        scanf("%d %d", &fivemod, &sevenmod);
        for (num = 10; num <= 100; ++num)
        {
            if ((num % 3 == trimod) && (num % 5 == fivemod) && (num % 7 == sevenmod))
            {
                casenum++;
                printf("Case %d: %d\n", casenum, num);
                break;
            }
        }
        if (num == 101)
        {
            casenum++;
            printf("Case %d: No answer\n", casenum);
        }
    }
}
