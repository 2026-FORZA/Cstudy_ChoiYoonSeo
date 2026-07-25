#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int n;
	scanf("%d", &n);

	if (n >= 20)
	{
		printf("adult");
	}
	else
	{
		printf("%d years later", 20 - n);
	}

	return 0;
}