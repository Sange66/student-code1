#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a;
	FILE* pf = fopen("文件的写入与输出.txt", "w");
	if (pf == NULL)
	{
		printf("error");
		return 0;
	}
	scanf("%d", &a);
	fprintf(pf, "%d", a);
	a = 0;
	fclose(pf);
	pf = NULL;
    pf = fopen("文件的写入与输出.txt", "r");
	if (pf == NULL)
	{
		printf("error");
		return 0;
	}
	fscanf(pf, "%d", &a);
	printf("%d", a);
	fclose(pf);
	pf = NULL;
	return 0;
}