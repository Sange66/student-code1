#define _CRT_SECURE_NO_WARNINGS 1\

#include<stdio.h>
int main()
{
	int a, b, n;
	b = 1;
	printf("������n��ֵ");
	scanf("%d", &n);
		for (a = 1; a <1+n; a++)
		{
			b *= a;
	     }
		printf("n�Ľ׳���%d", b);
	return 0;
}