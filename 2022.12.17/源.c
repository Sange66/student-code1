#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	char s[100],ss[100];
	FILE* pf;
	if ((pf = fopen("深入文件.txt", "w")) == NULL)
	{		printf("error");
	return 0;
    }
	scanf("%s", s);
	fputs(s, pf);
	fputs("\n", pf);
	fclose(pf);
	pf = NULL;
	if ((pf = fopen("深入文件.txt", "r")) == NULL)
	{
		printf("error");
		return 0;
	}
	fgets(ss, 100, pf);
	printf("%s", ss);
	return 0;
}