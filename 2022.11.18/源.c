#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int c = 1;
	double a,b=0.,d=0.00000001;
	for (a = 1; a >= d; a = 1 / (1/a + 2))
	{
		if (c % 2 == 1)
			b += a;
		else
			b -= a;
		c++;
	}
	b *= 4;
	printf("PI=%7.5f\n", b);
	return 0;
}