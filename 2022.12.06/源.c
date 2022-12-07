#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

int check(char s[],char x[])
{
	int a;
	for(a=0;s[a]==x[a];a++)
	{
		if (s[a]==0 && x[a]==0)
			break;
	}
	if (s[a] > x[a])
		return 1;
	if (s[a] < x[a])
		return -1;
	if (s[a] == 0 && x[a] == 0)
		return 0;
}

int main()
{
	int k;
	char a[500],b[500] ;
	gets(a);
	gets(b);
	k = check(a, b);
	printf("%d", k);
	return 0;
}