#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int arr[10] = { 6,2,5,5,4,5,6,3,7,6 };
    char str[51];
    int sum = 0;

    scanf("%s", str);

    for (int i = 0; str[i] != '\0'; i++)
    {
        sum += arr[str[i] - '0'];
    }

    printf("%d", sum);

    return 0;
}

