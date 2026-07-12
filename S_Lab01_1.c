#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int n, k;
    scanf("%d %d", &n, &k);

    int i = 1;
    int check = 0;
    while (1)
    {
        if (n % i == 0)
        {
            check += 1;
            if (check == k)
            {
                printf("%d", i);
                break;
            }

        }

        if (i > n)
        {
            printf("%d", 0);
            break;
        }


        i++;
    }


    return 0;
}