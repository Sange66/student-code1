#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int M(int a, int b)
{
	int c;
	c = a * b;

	return c;
}
int main()
{
	int d,e,f;
	printf("��������������\n");
	scanf("%d%d", &d, &e);
	f = M(d, e);
	printf("�����ĳ˻�Ϊ��%d\n", f);

	return 0;
}