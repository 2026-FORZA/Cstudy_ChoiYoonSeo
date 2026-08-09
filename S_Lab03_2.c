#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
    char str[10001];

    int koi = 0;
    int ioi = 0;

    scanf("%s", str);

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == 'K' && str[i + 1] == 'O' && str[i + 2] == 'I')
        {
            koi++;
        }

        if (str[i] == 'I' && str[i + 1] == 'O' && str[i + 2] == 'I')
        {
            ioi++;
        }
    }

    printf("%d\n", koi);

    printf("%d\n", ioi);

    return 0;
}