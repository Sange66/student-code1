#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int sz,a;
	int arr[10] = { 0 };
	sz = sizeof(arr);
	a = sz/sizeof(arr[0]);
	printf("该数组占了%d个字节\n该数组有%d个元素\n",sz,a);

	return 0;
}