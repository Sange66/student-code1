#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
struct stu
{
	char name[30];
	char sex[10];
	int  age;
	char phonenum[12];
};

int main()
{
	struct stu a = { "Sange","ÄÐ",18,"12345677890"};
	printf("%s\n", a.name);
	printf("%s\n", a.sex);
	printf("%d\n", a.age);
	printf("%s\n", a.phonenum);
	return 0;
}