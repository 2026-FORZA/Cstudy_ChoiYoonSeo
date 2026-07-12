#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int size, number;
    scanf("%d %d", &size, &number);

    if (size < 1 || size > 100 || number < 1 || number > 3)
    {
        printf("INPUT ERROR!");
        return 0;
    }


    if (number == 1)
    {
        for (int j = 1; j <= size; j++)
        {
            for (int i = 0; i < j; i++)
            {
                printf("*");
            }
            printf("\n");
        }
    }




    else if (number == 2)
    {
        for (int j = size; j > 0; j--)
        {
            for (int i = 0; i < j; i++)
            {
                printf("*");
            }
            printf("\n");
        }
    }



    else if (number == 3)
    {
        int k = 1;
        int star;
        int blank = size - 1;
        while (1)
        {
            star = k * 2 - 1;
            for (int j = 0; j < blank; j++)
                printf(" ");
            for (int i = 0; i < star; i++)
                printf("*");
            printf("\n");

            if (blank == 0)
                break;
            k += 1;
            blank -= 1;
        }
    }
    return 0;
}

