#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
struct stu
{
	char num[30];
	char name[30];
	int a;
	int b;
	int c;
};
int main()
{
	FILE* pf = fopen("stu.txt", "r");
	struct stu a, b = { 0,0,'0','0','0' };
	int i;
	for (i=1;;i++)
	{
		fscanf(pf, "%s%s%d%d%d", a.num, a.name, &a.a, &a.b, &a.c);
		if (strcmp(a.num,b.num)==0)
			break;
		if(i%2==1)
		printf("%s %s %d %d %d\n", a.num, a.name, a.a, a.b, a.c);
		b = a;
	}
	fclose(pf);
	pf = NULL;
	return 0;
}