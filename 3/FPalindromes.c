#include <stdio.h>
#include <string.h>

const char s[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ123456789";
const char mirrors[] = "A   3  HIL JM O   2TUVWXY51SE Z  8 ";
const char* msg[] = {"not a palindrome", "a regular palindrome",
                    "a mirrored string", "a mirrored palindrome"};

int find(char test)
{
    for (int i = 0; s[i]; ++i)
        if (s[i] == test) return i;
    return -1;
}

int main()
{
    char t[30];
    int num, nump, len, p, n;

    while(scanf("%s", t) != EOF)
    {
	p = 1;
	n = 1;
        len = strlen(t);
        for (int i = 0; i < (len+1)/2; ++i)
        {
            num = find(t[i]);
            nump = find(t[len - i - 1]);
            if (s[num] != s[nump]) p = 0;
            if (mirrors[num] != s[nump]) n = 0;
        }
        printf("%s -- is %s.\n\n", t, msg[n*2+p]);
    }
    return 0;
}
