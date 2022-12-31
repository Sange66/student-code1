#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
struct stu
{
	int  num;
	char name[100];
	int score;
};
int main()
{
	FILE* pf = fopen("根据学生的成绩排序后放在另一文件夹.txt", "w");
	FILE* as = fopen("stu.txt", "r");
	struct stu a[5];
	int i,j,b;
	char c[100];
	for(i=0;i<4;i++)
	{
		fscanf(as,"%d%s%d",&(a[i].num),a[i].name,&(a[i].score));
	}
	for (i = 0; i < 4; i++)
	{
		for (j = i + 1; j < 4; j++)
		{
			if (a[i].score < a[j].score)
			{
				b = a[i].num;
				a[i].num = a[j].num;
				a[j].num = b;
				for (b = 0; b < 100; b++)
				{
					c[b] = a[i].name[b];
					a[i].name[b] = a[j].name[b];
					a[j].name[b]= c[b];
				}
					b = a[i].score;
				a[i].score = a[j].score;
				a[j].score = b;
			}
		}
	}
	for (i = 0; i < 4; i++)
	{
		fprintf(pf, "%d %s %d\n", a[i].num, a[i].name, a[i].score);
	}
	return 0;
}