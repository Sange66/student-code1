#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	char a[50];
	FILE* pf = fopen("rewind.txt", "w+");
	fprintf(pf, "welcome you");
	rewind(pf);
	fgets(a,100, pf);
	printf("%s", a);
	return 0;
}