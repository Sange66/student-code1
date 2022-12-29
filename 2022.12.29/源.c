#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	FILE* pf = fopen("stu.txt", "a");
	fprintf(pf, "\n09 sange 90 90 90");
	return 0;
}