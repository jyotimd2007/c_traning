#include<stdio.h>
int mysub(int x, int y)
{
    int sum=x*x+y*y;
    return sum;
}
void main()
{
    int x=5,y=6;
    printf("\n%d",mysub(x,y));
    int a=2,b=6;
    printf("\n%d",mysub(a,b));
}