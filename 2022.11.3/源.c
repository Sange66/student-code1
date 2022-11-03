#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<math.h>
int main()
{
	int a, b, c;
	float s,d,area;
	scanf("%d %d %d", &a, &b, &c);
	s = (a + b + c) / 2;
	d = s * (s - a) * (s - b) * (s - c);
	area = pow(d,0.5);
	printf("area=%.2f\n",area);

	return 0;
}