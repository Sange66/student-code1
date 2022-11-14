#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int arr[6][6];
	int a, b, i;
	for (i = 0; i < 6; i++)
	{
		for (a = 5-i; a >=0; a--)
		{
			arr[i][a] = 6;
			printf("%3d", arr[i][a]);

		}
		printf("\n");

	}
	return 0;
}

