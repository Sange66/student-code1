#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a,b,c,x,i;
	for (i = 1; i <= 1000; i++)
	{
		if (i < 10)
			;
		if (i >= 10 && i < 100)
		{
			a = i / 10, b = i % 10;
			if (a + b == 15)
				printf("%d ", i);
		}
		if (i == 100)
			printf("\n");
		if (i >= 100)
		{
			x = i / 10; a = x / 10,b=x%10,c = i % 10;
			if(a+b+c==15)
				printf("%d ", i);
		}
	}
	return 0;
}