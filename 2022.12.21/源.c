#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	FILE* pf = fopen("��b���ַ����뵽��Ļ��.txt", "r");
	int i, b;
	char a;
	printf("b=");
	scanf("%d", &b);
	for(i=0;i<b;i++)
	{
		a = fgetc(pf);
		printf("%c", a);
	}
	return 0;
}