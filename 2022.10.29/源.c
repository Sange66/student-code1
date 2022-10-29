#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>


int main()
{
	int a, b, c, n;
	int d=0;
	a=b=c = 1;
	scanf("%d", &n);
	for(b=1;b<=n;b++)
	{
		c = 1;
		for (a = 1; a <= b; a++)
		{
			c*= a;
		}
		d += c;
	}
	printf("%d", d);
	return 0;
}