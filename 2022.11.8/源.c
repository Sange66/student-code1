#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int print(int a)      //Ϊ��ֹ��������������ݹ������������ 
{                    //1���ݹ����������
if (a > 1)          //2���ݹ�Ľ��б���Խ��Խ��������
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