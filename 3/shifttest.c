#include <stdio.h>

int main()
{
    printf("1 left shift 32 bits sub 1, what can we get?\n");
    printf("%d\n", (1 << 32) - 1);
    printf("well, how about 1UL sub 1?\n");
    printf("%ld\n", (1UL << 32) - 1);
    printf("well, then 33 bits?\n");
    printf("%d\n", 1 << 33);
    return 0;
}
