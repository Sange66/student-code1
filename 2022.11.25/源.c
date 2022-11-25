#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a = 0 ;
	int* pa = &a;
	int **ppa = &pa;
	**ppa = 5;
	printf("%d ", a);
	printf("%d ", *pa);
	printf("%d ", **ppa);
	return 0;
}
