#define _CRT_SECURE_NO_WARNINGS 1\

#include<stdio.h>
int main()
{
	int a, b, n;
	b = 1;
	printf("请输入n的值");
	scanf("%d", &n);
		for (a = 1; a <1+n; a++)
		{
			b *= a;
	     }
		printf("n的阶乘是%d", b);
	return 0;
}