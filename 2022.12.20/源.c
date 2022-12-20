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
	struct stu s[2];
	FILE* pf = fopen("fwrite&fread .txt", "wb");
	if (pf == NULL)
	{
		printf("error");
		return 0;
	}
	scanf("%s %s %f %f %f", s[0].num, s[0].name,&( s[0].a), &(s[0].b),&( s[0].c));
	scanf("%s %s %f %f %f", s[1].num, s[1].name, &(s[1].a), &(s[1].b), &(s[1].c));
	fwrite(s, sizeof(struct stu), 2, pf);
	fclose(pf);
	pf = NULL;
	pf = fopen("fwrite&fread .txt", "rb");
	if (pf == NULL)
	{
		printf("error");
		return 0;
	}
	fread(s, sizeof(struct stu), 2, pf);
	printf("%s %s %f %f %f\n", s[0].num, s[0].name, s[0].a, s[0].b, s[0].c);
	printf("%s %s %f %f %f", s[1].num, s[1].name, s[1].a, s[1].b, s[1].c);
	fclose(pf);
	pf = NULL;
	return 0;
}