//This program is used to print number 1 to n
//where n is an input value by user
//each number hold one line lonely

#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    for(int i = 1; i <= n; i++)
    {
        printf("%d\n", i);
    }
    return 0;
}
