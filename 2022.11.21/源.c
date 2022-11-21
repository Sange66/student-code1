#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#define M 100
void main()
{
    int  a, b, x[M], sum, cnt = 0;
    for (a = 1; a <= 1000; a++)
    {
        sum = 0;
        b = 1;
        while (b < a)
        {
            if (a % b == 0)            
                sum += b;
            b++;
        }
        if (sum==a)          
            x[cnt++] = a;
    }
    for (b = 0; b < cnt   ; b++)         
        printf("%8d", x[b]);
    printf("\n");
}



