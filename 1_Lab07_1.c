#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

typedef struct
{
    char name[11];
    int a, b, c;
} Student;

int rank(int score, int arr[], int n)
{
    int r = 1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > score)
            r++;
    }
    return r;
}

int main()
{
    int n;
    scanf("%d", &n);

    Student s[101];

    int b[101], c[101];

    for (int i = 0; i < n; i++)
    {
        scanf("%s %d %d %d", s[i].name, &s[i].a, &s[i].b, &s[i].c);
        b[i] = s[i].b;
        c[i] = s[i].c;
    }

    int idx = 0;

    for (int i = 1; i < n; i++)
    {
        if (s[i].a > s[idx].a)
            idx = i;
    }

    int r2 = rank(s[idx].b, b, n);
    int r3 = rank(s[idx].c, c, n);

    printf("%s %d %d", s[idx].name, r2, r3);

    return 0;
}