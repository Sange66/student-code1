#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a, b, c = 0, d = 0;
	int arr[3][3] = { 1,2,3,4,5,6,7,8,9 };

	for (a = 0; a < 3; a++)
	{
		b = a;
		d += arr[a][b];
	}
	for (a = 0; a < 3; a++)
	{
		b = 2 - a;
		c += arr[a][b];
	}
	c += d;
	printf("sum=%d\n", c);

}