#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	char a;
	char b,c,d;
	again:
	printf("\n������һ����ĸ");
	scanf("%c", &a);
	b = a + 32;
	c = a - 32;
	if (a >= 65 && a <= 90)
		printf("��������Ǵ�д��ĸ������Сд��ʽΪ:%c", b);
	else if (a >= 97 && a <= 122)
		printf("���������Сд��ĸ�����Ĵ�д��ʽΪ:%c", c);
	else
	{
		printf("\nͬѧ��Ҫ����Ŷ");
		d = getchar();
		goto again;
	}

	return 0;
}


