#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int b=0, c=0, d=0, e=0;
	char a=0;
	for (a; ;)
	{
		if (a == 10)
			break;
		scanf("%c", &a);
		if (a >= 65 && a <= 90)
			b++;
		else if (a >= 97 && a <= 122)
			b++;
		else if (a == 32)
			c++;
		else if (a >= 48 && a <= 57)
			d++;
		else
			e++;
	}
	e -= 1;
	printf("Ó¢ÎÄ×ÖÄ¸=%d£¬¿Õ¸ñ=%d£¬Êý×Ö×Ö·û=%d£¬ÆäËü×Ö·û=%d\n", b, c, d, e);
	return 0;
}