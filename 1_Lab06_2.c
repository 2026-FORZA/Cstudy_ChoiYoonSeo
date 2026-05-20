#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main()
{
    char s[1001];

    gets_s(s, sizeof(s));

    printf("%d", strlen(s));

    return 0;

}