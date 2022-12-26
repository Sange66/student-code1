#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
struct stu
{
	char num[20];
	char name[20];
	float a;
	float b;
	float c;
};

int main()
{
	char s[20];
	struct stu a[10];
	printf("请输入文件student.rec路径");
	scanf("%s", s);
	FILE* pf = fopen(s , "w");
	int i;
	printf("请输入10个学生的信息：");
	for (i = 0; i < 10; i++)
	{
		scanf("%s %s %f %f %f", a[i].num, a[i].name, &(a[i].a), &(a[i].b), &(a[i].c));
	}
	for (i = 0; i < 10; i++)
	{
		fprintf(pf, "%s %s %f %f %f\n", a[i].num, a[i].name, a[i].a, a[i].b, a[i].c);
	}
	for (i = 0; i < 10; i++)
	{
		printf("学生%d的信息为\n", i + 1);
		printf("学号：%s; 姓名：%s; 语文：%f; 数学：%f; 英语：%f", a[i].num, a[i].name, a[i].a, a[i].b, a[i].c);
		if (i != 9)
			printf("\n;");
	}
	fclose(pf);
	pf = NULL;
	return 0;
}