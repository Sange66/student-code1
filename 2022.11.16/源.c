#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c,i;
	for (i = 100; i < 1000; i++)
	{
		a = i / 100;
		b = (i / 10) % 10;
		c = (i % 10)%10;
		if (pow(a,3)+pow(b,3)+pow(c,3) == i)
			printf("%d\n", i);
	}
	return 0;
}