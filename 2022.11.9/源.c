#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int fbnq(int x)
{
	int a = 1, b = 1, c = 0,i;   //1 1 2 3 5 8 13 21 34 55 89
	if (x >=3)                  // a b c
	{                          //    a b c
		for (i = 3; i <= x; i++)    // a b c
		{                          
			c = a + b;
			a = b;
			b = c;
		}
		return c;
	}
	else
		return 1;
}
int main()
{
	int a, b;
	scanf("%d", &a);
    b = fbnq(a);
	printf("%d\n", b);
	return 0;
}