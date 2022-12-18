#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
struct stu
{
	char num[20];
	char name[20];
	int a;
	int b;
	int c;
};
int main()
{
	struct stu s;
	int a;
	FILE* pf = fopen("文件的循环读写.txt", "w");
	if (pf == NULL)
	{
		printf("error");
		return 0;
	}
	for (a = 0; a < 3; a++)
	{
		scanf("%s %s %d %d %d", s.num, s.name, &(s.a), &(s.b), &(s.c));
		fprintf(pf, "%s %s %d %d %d\n", s.num, s.name, s.a, s.b, s.c);
	}
	fclose(pf);
	pf = NULL;
	pf = fopen("文件的循环读写.txt", "r");
	if (pf == NULL)
	{
		printf("error");
		return 0;
	}
	for (a = 0; a < 3; a++)
	{
		fscanf(pf, "%s %s %d %d %d", s.num, s.name, &(s.a),&( s.b),&( s.c));
		printf("%s %s %d %d %d\n", s.num, s.name, s.a, s.b, s.c);
	}
	fclose(pf);
	pf = NULL;
	return 0;
}