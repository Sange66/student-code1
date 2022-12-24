#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	char s[100];
	scanf("%s", s);
	FILE* pf = fopen(s, "w");
	if (pf == NULL)
	{
		printf("error");
		return 0;
	}
	fprintf(pf, "sange");
	fclose(pf);
	pf = NULL;

	return 0;
}