#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int sz,a;
	int arr[10] = { 0 };
	sz = sizeof(arr);
	a = sz/sizeof(arr[0]);
	printf("������ռ��%d���ֽ�\n��������%d��Ԫ��\n",sz,a);

	return 0;
}