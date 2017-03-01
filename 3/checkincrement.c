#include <stdio.h>

int main()
{
    int count = 0;
    printf("The initial count value is 0.\n");
    printf("Then we will execute 'printf(count++, count++, count++) to see the value'\n");
    printf("%d %d %d\n\n", count++, count++, count++);

    count = 0;
    printf("Now, count be 0 again, we check the assignment.\n");
    printf("We will compute count = count++ to see the count value.\n");
    printf("%d\n", count = count++);
    return 0;
}
