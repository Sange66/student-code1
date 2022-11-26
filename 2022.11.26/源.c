#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
	int main()
	{
		int i, j;
		int k, a[15] = { 0 }, * p = a;
		printf("please input a[15]:\n");
		for (i = 0; i < 15; i++)
		{
			scanf("%d", &a[i]);
		}
		for (i = 0; i < 15; i++)
		{
			for (j = i+1; j < 15; j++)
			{
				if (*(p + i) < *(p + j))
					k = *(p + i), * (p + i) = *(p + j), * (p + j) = k;
			}
		}
		for (i = 0; i < 15; i++)
		{
			printf("%d ", *(p + i));
		}
		printf("\n");

	}
