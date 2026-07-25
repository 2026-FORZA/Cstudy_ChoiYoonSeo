#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
    int K;
    scanf("%d", &K);

    int dir[6], len[6];

    for (int i = 0; i < 6; i++)
    {
        scanf("%d %d", &dir[i], &len[i]);
    }

    int maxW = 0, maxH = 0;
    int idxW = 0, idxH = 0;

    for (int i = 0; i < 6; i++)
    {
        if ((dir[i] == 1 || dir[i] == 2) && len[i] > maxW)
        {
            maxW = len[i];
            idxW = i;
        }

        if ((dir[i] == 3 || dir[i] == 4) && len[i] > maxH)
        {
            maxH = len[i];
            idxH = i;
        }
    }

    int smallW = len[(idxW + 3) % 6];
    int smallH = len[(idxH + 3) % 6];

    int area = maxW * maxH - smallW * smallH;

    printf("%d", area * K);

    return 0;
}