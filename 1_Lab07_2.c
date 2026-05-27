#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    char str[101];

    int a, b;

    scanf("%s", str);
    scanf("%d %d", &a, &b);

    char* p = str;

    for (int i = a - 1; i < b; i++)
    {
        printf("%c", *(p + i));
    }

    return 0;
}
