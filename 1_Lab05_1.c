#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int k;

void f(int k)
{
	if (k % 2 == 0)
		printf("even");
	else
		printf("odd");
}

int main()
{
	scanf("%d", &k);
	f(k);
	return 0;
}