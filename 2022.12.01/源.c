#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	char arr[5][5] = { 0 };
	int a,b;
	for (a = 0; a < 5; a++)
		arr[0][a] = 42;
	for (a = 1; a < 4; a++)
		arr[1][a] = 42;
	arr[2][2] = 42;
	for (a = 1; a < 4; a++)
		arr[3][a] = 42;
	for (a = 0; a < 5; a++)
		arr[4][a] = 42;
	for (a = 0; a < 5; a++)
	{
		for (b = 0; b < 5; b++)
		{
			if (arr[a][b] == 0)
				printf(" ");
			if (arr[a][b] == 42)
				printf("%c", arr[a][b]);
		}
		printf("\n");
	}
	return 0;
}