#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int main()
{
	int a;
	scanf("%d", &a);
	switch (a)
	{
	case 1:
		printf("��һ���Ƽ��");
		break;
	case 2:
		printf("�ܶ������");
		break;
	case 3:
		printf("�����������");
		break;
	case 4:
		printf("���ģ����ջ");
		break;
	case 5:
		printf("���壺�ͼ��");
		break;
	default:
		printf("��������\n");
	}
	return 0;
}