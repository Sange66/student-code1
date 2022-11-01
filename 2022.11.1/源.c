#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	char a;
	char b,c,d;
	again:
	printf("\n请输入一个字母");
	scanf("%c", &a);
	b = a + 32;
	c = a - 32;
	if (a >= 65 && a <= 90)
		printf("你输入的是大写字母，它的小写形式为:%c", b);
	else if (a >= 97 && a <= 122)
		printf("你输入的是小写字母，它的大写形式为:%c", c);
	else
	{
		printf("\n同学不要捣乱哦");
		d = getchar();
		goto again;
	}

	return 0;
}


