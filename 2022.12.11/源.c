#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
struct inf
{
	int  n;
	char name[10];
};

int main()
{
	int a, b,c, i,j;
	struct inf x[3], s[6];
	printf("�������ѡ������(����3��)��\n");
	scanf("%d", &a);
	for (j = 1; j < a + 1; j++)
	{
		x[j - 1].n = 0;
	}
	for (i = 1; i < 1 + a; i++)
	{
		printf("�������%d����ѡ��������\n", i);
		scanf("%s", x[i - 1].name);
	}
	printf("������ͶƱ������(����10��)��\n");
	scanf("%d", &b);
	for (i = 1; i < a + 1; i++)
	{
	printf("��%d����ѡ��������%s\n", i, x[i - 1].name);
    }
	printf("�뿪ʼͶƱ��\n");
	for (i = 1; i < b + 1; i++)
	{
		printf("���%d��ͶƱ�������ѡ��������\n", i);
		scanf("%s", s[i - 1].name);
		for (j = 1; j < 1 + a; j++)
		{
		c = strcmp(s[i - 1].name, x[j - 1].name);
		if (c == 0)
				x[j - 1].n++;
		}
	}
	for (i = 1; i < 1 + a; i++)
	{
		printf("��%d����ѡ��:%s��Ʊ��Ϊ%d\n", i, x[i - 1].name, x[i - 1].n);
	}
	return 0;
}