#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
void an(double a, double b, double c)
{
	double derta = b * b - 4 * a * c;
	double d =  (-b + sqrt(derta))/2, e =  (-b - sqrt(derta))/2;
	if (derta < 0)
		printf("无解");
	if (derta == 0)
		printf("有且仅有一个解为x=%lf", d);
	if (derta > 0)
		printf("有两个解，分别为x=%lf，x=%lf", d, e);
}
int main()
{
	double a, b, c;
	printf("请输入a，b，c\n");
	scanf("%lf %lf %lf", &a, &b, &c);
	an(a, b, c);
	return 0;
}