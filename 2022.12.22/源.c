#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	FILE* pf = fopen("1.txt", "r");
	FILE* as = fopen("从一个文件复制n个字符到另一文件中.txt", "w");
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