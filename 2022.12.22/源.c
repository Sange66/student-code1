#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	FILE* pf = fopen("1.txt", "r");
	FILE* as = fopen("��һ���ļ�����n���ַ�����һ�ļ���.txt", "w");
	char b;
	int i,n;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		b = fgetc(pf);
		fprintf(as, "%c", b);
	}
	return 0;
}