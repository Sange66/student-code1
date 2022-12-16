#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	char c;
	FILE* pf;
	if ((pf = fopen("文件.txt", "w")) == NULL)
	{
		printf("error");
		return 0;
	}
	fputc('s',pf);
	fputc('a',pf);
	fputc('n',pf);
	fputc('g',pf);
	fputc('e',pf);
	fclose(pf);
	if ((pf = fopen("文件.txt", "r")) == NULL)
	{
		printf("error");
		return 0;
	}
	c = fgetc(pf);
	printf("%c", c);
	c = fgetc(pf);
	printf("%c", c);
	c = fgetc(pf);
	printf("%c", c);
	c = fgetc(pf);
	printf("%c", c);
	c = fgetc(pf);
	printf("%c", c);
	fclose(pf);
	return 0;
}