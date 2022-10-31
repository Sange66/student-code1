#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	int a,b, i;
	for (i = 1; i <= 9; i++)
	{
		for (a = 1; a <= i; a++)
		{
			b = i * a;
			printf("%d*%d=%-2d ",i,a,b);

		}
		printf("\n");
		
	}


	return 0;
}