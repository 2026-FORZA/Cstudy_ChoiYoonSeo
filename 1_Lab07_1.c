#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{

    char str[1001];
    scanf("%s", str);

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (isupper(str[i]))
            str[i] = tolower(str[i]);

        else if (islower(str[i]))
            str[i] = toupper(str[i]);
    }

    printf("%s", str);
    return 0;
}