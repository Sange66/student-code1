#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//int main()
//{
//
//	int a, b;
//	scanf("%d", &a);
//	b=(a % 2);
//	if (b==1)
//		printf("输入的为奇数");
//	else
//		printf("输入的为偶数");
//	return 0;
//}

//int main()
//{
//	int i = 1;
//	while (i < 101)
//	{
//		printf("%d ", i);
//		i+=2;
//
//	}
//	return 0;
//}
int main()
{
	int i = 1;
	while (i <= 100)
	{
		if (i % 2 == 1)
			printf("%d ", i);
		i++;

	}
	return 0;
}