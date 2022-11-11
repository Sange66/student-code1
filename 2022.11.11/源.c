#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int x, i;
	for (i = 1; i <= 100; i++)
	{
		x = i;
		if (++x%2==0)   //x+1后可以被2整除
		if (++x%3==0)   //x再次+1后可以被3整除
		if (++x%7==0)   //x再再+1后可以被7整除
		printf("%d ", i);
	}
	printf("\n");
	return 0;
}