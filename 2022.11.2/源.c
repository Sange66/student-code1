#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int  x, y,z;
	again:
	printf("请输入x:");
	scanf("%d", &x);
	if (x >= 10)
	{
		y = 2 * x + 9;
	}
	if (x > 0 && x < 10)
	{
		y = x + 1;
	}
	if (x == 0)
	{
		y = 0;
	}
	if (x < 0)
	{
		y = 2 * x - 9;
	}
	printf("y的值为%d\n", y);
	printf("输入1再次输入，输入其他退出程序");
	scanf("%d", &z);
	if (z == 1)
    goto again;


	return 0;
}