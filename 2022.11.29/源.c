#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a = 0,i,k, arr[3][4] = { 1,2,3,4,6,9,-5,4,3,2 };
	for (i = 0; i < 3; i++)
	{
		for (k = 0; k < 4; k++)
		{
			if (arr[i][k] < 0)
			{
				a= arr[i][k];
				goto again;
			}
		}
	}
again:
	printf("%d", arr[i][k]);
	return 0;
}