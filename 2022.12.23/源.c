#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	FILE* pf = fopen("��.txt", "r");
	FILE* as = fopen("��һ�ļ������������ٴ�ŵ���һ�ļ���.txt", "w");
	char a[10], s,c=0;
	int i,j;
	for (i = 0; i < 10; i++)
	{
		fscanf(pf, "%c", &s);
		a[i] = s;
     }
	for (i = 0; i < 10; i++)
	{
		for (j = i + 1; j < 10; j++)
		{
			if (a[i] < a[j])
			{
				 c=a[i]; 
				a[i]= a[j]; 
				a[j] = c;
			}
		}
		fprintf(as,"%c", a[i]);
	}
	return 0;
}