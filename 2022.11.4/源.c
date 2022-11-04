#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

 void swap(int* a, int* b)
{
	int c=0;
	c = *a;
	*a = *b;
	*b = c;
}

int main()
{
	int d = 5;
	int e = 10;
	printf("d=%d e=%d\n", d, e);
	swap(&d, &e);
	printf("d=%d e=%d", d, e);


	return 0;
}