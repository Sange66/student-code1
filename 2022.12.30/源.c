#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	char a[200];
	int b=2,i,j;
	FILE* pf = fopen("往新文件添加新数字并排序.txt", "a+");
	fprintf(pf, "%d",b);
	rewind(pf);
	fgets(a, 100, pf);
	for (i = 0;i<10; i++)
	{
		j = i + 1;
		if (a[i] == a[j])
			break;
		for (j;j<10; j++)
		{
			if (a[i] > a[j])
			{
				b = a[i];
				a[i] = a[j];
				a[j] = b;
			}
		}
	}
	fclose(pf);
	pf=NULL;
	pf = fopen("往新文件添加新数字并排序.txt", "w");
	fputs(a, pf);
	return 0;
}