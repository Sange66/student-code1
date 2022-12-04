#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

void jc(int a)
{
	int i = 0, p,q;
	for (q=1;q<=a;q++)
	{
		p = 1;
		for (i = 1; i <= q; i++)
		{

			p = p * i;
		}
		printf("%d!=%d\n", q,p);
	}
}
int main()
{
	int a = 0,b;
	scanf("%d", &a);
	jc(a);
	return 0;
}