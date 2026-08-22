#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int n, m;
    int arr[30][30] = { 0 };
    scanf("%d %d", &n, &m);


    for (int i = 0; i < n; i++)
    {
        arr[i][0] = 1;
        arr[i][i] = 1;

        for (int j = 1; j < i; j++)
        {
            arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
        }
    }


    if (m == 1)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j <= i; j++)
            {
                printf("%d ", arr[i][j]);
            }

            printf("\n");
        }
    }


    else if (m == 2)
    {
        for (int i = n - 1; i >= 0; i--)
        {
            for (int j = 0; j < n - 1 - i; j++)
            {
                printf(" ");
            }
            for (int j = 0; j <= i; j++)
            {
                printf("%d ", arr[i][j]);
            }
            printf("\n");
        }
    }


    else if (m == 3)
    {
        for (int i = n - 1; i >= 0; i--)
        {
            for (int j = n - 1; j >= i; j--)
            {
                printf("%d ", arr[j][i]);
            }
            printf("\n");
        }
    }
    return 0;
}