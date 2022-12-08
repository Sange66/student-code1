#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
unsigned fun6(unsigned  num)
{
    unsigned  k = 1;           
    do
    {
        k *= num % 10;     // k=6            k=2*6=12
        num /= 10;            //num=2        num=0
    } while (num);           //Ö±µ½num=0
    return k;
}
void main()
{
    unsigned n = 26;
    printf("%d\n", fun6(n));                //Çófun6£¨26£©
}


