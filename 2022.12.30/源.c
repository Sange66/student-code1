#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	char a[200];
	int b=2,i,j;
	FILE* pf = fopen("�����ļ���������ֲ�����.txt", "a+");
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
	pf = fopen("�����ļ���������ֲ�����.txt", "w");
	fputs(a, pf);
	return 0;
}