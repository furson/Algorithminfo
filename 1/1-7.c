#include <stdio.h>

int main(void)
{
    int year;

    scanf("%d", &year);
    if ((year % 4 == 0) && (year % 400 != 0))
        printf("yes\n");
    else
        printf("no\n");

    return 0;
}
//a is used to add something behind the cursor
//o is used to add a new line below the current line
//O(big o) is used to add a new line upon the current line
//cw is used to change one word from the cursor to the end
