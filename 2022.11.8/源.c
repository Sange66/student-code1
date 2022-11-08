#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int print(int a)      //为防止数据溢出，函数递归必须满足两点 
{                    //1、递归必须有条件
if (a > 1)          //2、递归的进行必须越来越脱离条件
{
	print(a - 1);

}
printf("%d ", a);
}

int main() 
{
	int a;
	scanf("%d", &a);
	print(a);
	return 0;
}