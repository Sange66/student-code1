#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int main()
{
	int a;
	scanf("%d", &a);
	switch (a)
	{
	case 1:
		printf("周一：科技活动");
		break;
	case 2:
		printf("周二：社会活动");
		break;
	case 3:
		printf("周三：艺术活动");
		break;
	case 4:
		printf("周四：文艺活动");
		break;
	case 5:
		printf("周五：劳技活动");
		break;
	default:
		printf("输入有误\n");
	}
	return 0;
}