#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int N, M;
    int score[1000][1000];
    scanf("%d %d", &N, &M);

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            scanf("%d", &score[i][j]);
        }
    }
    for (int j = 0; j < M; j++)
    {
        int count = 0;
        for (int i = 0; i < N; i++)
        {
            int max = score[i][0];
            for (int k = 1; k < M; k++)
            {
                if (score[i][k] > max)
                {
                    max = score[i][k];
                }
            }
            if (score[i][j] < max)
            {
                count++;
            }
        }
        printf("%d ", count);
    }
    return 0;
}