#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
print(int x)
{
	if (x > 10)
	{
		print(x / 10);
	}

	printf("%d ", x % 10);
}
int main()
{
	int a;
	scanf("%d", &a);
	print(a);
	return 0;
}
