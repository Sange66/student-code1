#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
int strlength(char s[])
{
	int a=1,b=0;
	for (; a != 0;)
	{
		a = s[b];
		if( a != 0)
		b++;
	}
	return b;
}
int main()
{
	int a,b;
	char arr[500];
	gets(arr);

	a=strlength(arr);
	printf("你输入的字符串的长度为%d", a);
}