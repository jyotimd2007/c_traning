#include<stdio.h>
int myadd(int a,int b)
{
    int sum = a+b;
    return sum;
}
void main()
{
    int a=90;
    int b=80;
    printf("%d",myadd(a,b));
    int c =17;
    int d =34;
    printf("%d",myadd(c,d));
}
