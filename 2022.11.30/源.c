#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int a=0, b=0, c=0;
	for (a = 0; a < 5; a++)
	{
		b = 9 - a;
	 c = arr[b], arr[b] = arr[a], arr[a] = c;
	}
	for (a = 0; a < 10; a++)
		printf("%d ", arr[a]);
	return 0;
}