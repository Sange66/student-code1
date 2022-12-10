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
	printf("请输入候选人数量(大于3个)：\n");
	scanf("%d", &a);
	for (j = 1; j < a + 1; j++)
	{
		x[j - 1].n = 0;
	}
	for (i = 1; i < 1 + a; i++)
	{
		printf("请输入第%d个候选人姓名：\n", i);
		scanf("%s", x[i - 1].name);
	}
	printf("请输入投票人数量(大于10个)：\n");
	scanf("%d", &b);
	for (i = 1; i < a + 1; i++)
	{
	printf("第%d个候选人姓名：%s\n", i, x[i - 1].name);
    }
	printf("请开始投票：\n");
	for (i = 1; i < b + 1; i++)
	{
		printf("请第%d个投票人输入候选人姓名：\n", i);
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
		printf("第%d个候选人:%s的票数为%d\n", i, x[i - 1].name, x[i - 1].n);
	}
	return 0;
}