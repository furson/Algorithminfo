#include <stdio.h>

const char former[] = {"`1234567890-=QWERTYUIOP[]\\ASDFGHJKL;'ZXCVBNM,./"};
const char after[] = {"/`1234567890-=QWERTYUIOP[]\\ASDFGHJKL;'ZXCVBNM,."};

int main()
{
    char c;
    int count;

    while ((c = getchar()) != EOF)
    {
        if (c == ' ' || c == '\n')
        {
            putchar(c);
            continue;
        }
        for (count = 0; former[count]; ++count)
            if (former[count] == c) break;
        putchar(after[count]);
    }

    return 0;
}
