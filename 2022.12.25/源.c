#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	FILE* pf = fopen("m1.txt", "r");
	FILE* as = fopen("m2.txt", "r");
	FILE* ss = fopen("m3.txt", "w");
	char a[100], b[100], c[100] = { 0 },s;
	int d,i, j;
	 fgets(a,100,pf);
	 fgets(b, 100, as);

	 for (i = 0; a[i] != 0; i++)
	 {
		 c[i] = a[i];
	 }
	
	 for (j=0; b[j] != 0; j++,i++)
	 {
		 c[i] = b[j];
	 }
	 d = i;

	 for (i = 0; i < d; i++)
	 {
		 for (j = i+1; j < d; j++)
		 {
			 if (c[i] > c[j])
			 {
				 s = c[i];
				 c[i] = c[j];
				 c[j] = s;
			 }
		 }
	}
	
     fprintf(ss, "%s", c);

	return 0;
}