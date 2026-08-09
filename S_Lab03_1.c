#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int a, b;
    int x, y, z;

    scanf("%d", &a);
    scanf("%d", &b);

    x = b / 100;       // 백의 자리
    y = (b / 10) % 10; // 십의 자리
    z = b % 10;        // 일의 자리

    printf("%d\n", a * z);
    printf("%d\n", a * y);
    printf("%d\n", a * x);
    printf("%d\n", a * b);

    return 0;
}