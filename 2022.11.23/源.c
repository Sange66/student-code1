#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a=10,b=10,*p1, * p2;
	p1 = &a, p2 = &b;
	printf("%x %d\n", p1, *p1);
	printf("%x %d", p2, *p2);
	return 0;
}