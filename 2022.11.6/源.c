#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

void p6()
{
	printf("6");
}
void pn��6(n)
{
	int a;
	for (a = 0; a < n; a++)
	{
		p6();
	}
}

int main()
{
	int n;
	scanf("%d", &n);
	pn��6(n);

	return 0;
}