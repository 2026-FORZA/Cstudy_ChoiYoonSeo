#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int M, N;
    int count = 0;
    int prime[10000001] = { 0 };

    scanf("%d %d", &M, &N);

    for (int i = 2; i <= N; i++)
    {
        prime[i] = 1;
    }

    for (int i = 2; i * i <= N; i++)
    {
        if (prime[i] == 1)
        {
            for (int j = i * i; j <= N; j += i)
            {
                prime[j] = 0;
            }
        }
    }

    for (int i = M; i <= N; i++)
    {
        if (prime[i] == 1)
        {
            count++;
        }
    }

    printf("%d", count);

    return 0;
}