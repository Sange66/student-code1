#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
double  pi(double  eps)
{
    double s = 0.0, t = 1.0;
    
        int  n;
        for (n = 1; t > eps; n++)
        {
            s += t;
            t = n * t / (2 * n + 1);
        }
        return (2.0 * s);
    }
    int main()
    {
        double a = 0.000001, b;
        b = pi(a);
        printf("%lf", b);
    }
