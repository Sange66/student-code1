#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int main()
{
	int a, b, c;
	scanf( "%d%d",&a,&b) ;
	printf("a=%d,b=%d\n", a, b);
	c = a, a = b, b = c;
	printf("转换后的结果是：a=%d,b=%d", a, b);


	return 0;
}