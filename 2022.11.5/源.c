#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	int a, i=2;
	printf("请输入a=");
	scanf("%d", &a);
	for (a; a % i != 0; i++)
	{
		if (i == a)
			break;

	}
	if (i == a)
		printf("a是质数");
	else
		printf("a是素数");
	return 0;
}