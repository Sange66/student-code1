#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
int main()
{
	char a[5][100] = { 0 }, * b[5] = { a[0],a[1],a[2],a[3],a[4] };
	int i;
	gets(a[0]);
	gets(a[1]);
	gets(a[2]);
	gets(a[3]);
	gets(a[4]);
	for (i = 1; i < 5; i++)
	{
		if (strcmp(b[0], b[i])< 0)
		{
			b[0] = b[i];
		}
	}
	printf("较大的字符串是%s\n",b[0]);
	return 0;
}