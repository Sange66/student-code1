#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a, b;
	int arr[7][7] = { 0 };
	for (a = 0; a <= 6; a++)
	{
		arr[a][0] = 1;
		arr[a][a] = 1;
		
	}
	for (a = 1; a <= 6; a++)
	{
		for (b = 1; b <= 6;b++)
		{
			arr[a][b] = arr[a - 1][b] + arr[a - 1][b - 1];
			
		}
	}

	for (a = 0; a < 7; a++)
	{
		for (b = 0; b < 7; b++)
		{
			if (arr[a][b] != 0)
				printf("%4d", arr[a][b]);
		}
		printf("\n");
	}
	return 0;
}