#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int arr[15] = {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14};
	int a, b, c,d=0,e=0;
	scanf("%d", &a);
	for (b=0,c=14; ;)
	{
		d = (b + c) / 2;
		if (e == 19)
			d += 1;
		if (arr[d] > a)
		{
			c = d;
		}
		if (arr[d] < a)
		{
			b= d;
		}
		if (arr[d] == a)
			break;
		e++;
		if (e == 20)
			break;
	}
	if (e != 20)
		printf("这是第%d个数", d+1);
	else
		printf("无此数");
	return 0;
}