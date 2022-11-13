#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

void arrge(int arr[],int num)
{
	int a, b, c, d;
	for (a = 0; a < num; a++)
	{
		for (b = a + 1; b < num; b++)
		{
			if (arr[a] < arr[b])
				;
			else
			{
				c = arr[a];
				arr[a] = arr[b];
				arr[b] = c;
			}
		}
	}
}
int main()
{
	int a,sz, arr[10] = {10,5,4,9,8,7,6,3,2,1};
	sz = sizeof(arr) / sizeof(arr[0]);
	arrge(arr,sz);
	for (a = 0; a < 10; a++)
	{
		printf("%d ", arr[a]);
	}

	return 0;
}