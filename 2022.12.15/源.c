#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a = 7;             //0111                          
	int b = 10;            //1010
	int c = a & b;                              // &����һ����1����1
	printf("%d\n", c);     //0010=2
	c = a | b;                                  //| ����������1����1
	printf("%d\n", c);     //1111=15
	c = a ^ b;                                  //^ ���෴Ϊ1����ͬΪ0
	printf("%d\n", c);     //1101=13
	return 0;
}