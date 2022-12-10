#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

struct inf
{
	char num[20];
	char name[20];
	int s1;
	int s2;
	int s3;
};
void scanf1( struct inf* x)
{
	scanf("%s",x->num);
	scanf("%s",x->name);
    scanf("%d", &x->s1);
	scanf("%d", &x->s2);
    scanf("%d", &x->s3);
}
int main()
{
	int b,c,d,i= 0;
	struct inf a[15];
	printf("请输入15名学生的学号，姓名，3门课的成绩（以空格分隔，以回车结束一行的数据输入）：\n");
	for (i = 0; i < 15; i++)
	{
		scanf1(&a[i]);
	}
	for (i = 1; i < 15; i++)
	{
		b = a[0].s1 + a[0].s2 + a[0].s3;
		c = a[i].s1 + a[i].s2 + a[i].s3;
		if (c > b)
		{
			b = c;
			d = i;
		}
	}
	printf("最高分学生的数据是->学号:%s\n姓名:%s\n3门课程成绩:%d %d %d\n", a[d].num, a[d].name, a[d].s1, a[d].s2, a[d].s3);
	return 0;
}
