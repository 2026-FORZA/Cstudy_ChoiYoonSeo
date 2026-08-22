#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int n;
    int arr[100][100];
    int num = 1;

    scanf("%d", &n);

    for (int sum = 0; sum <= 2 * n - 2; sum++)
    {
        if (sum % 2 == 0)
        {
            for (int i = 0; i < n; i++)
            {
                int j = sum - i;

                if (j >= 0 && j < n)
                {
                    arr[i][j] = num;
                    num++;
                }
            }
        }

        else
        {
            for (int i = n - 1; i >= 0; i--)
            {
                int j = sum - i;

                if (j >= 0 && j < n)
                {
                    arr[i][j] = num;
                    num++;
                }
            }
        }
    }



    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }


    return 0;
}