#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int x, i;
	for (i = 1; i <= 100; i++)
	{
		x = i;
		if (++x%2==0)   //x+1����Ա�2����
		if (++x%3==0)   //x�ٴ�+1����Ա�3����
		if (++x%7==0)   //x����+1����Ա�7����
		printf("%d ", i);
	}
	printf("\n");
	return 0;
}