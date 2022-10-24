#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int M(int a, int b)
{
	int c;
	c = a * b;

	return c;
}
int main()
{
	int d,e,f;
	printf("请输入两个数字\n");
	scanf("%d%d", &d, &e);
	f = M(d, e);
	printf("两数的乘积为：%d\n", f);

	return 0;
}