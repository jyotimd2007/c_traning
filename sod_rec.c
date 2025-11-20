#include<stdio.h>
int sod_rec(int n)
{
    if(n==0)
    return 0;
    int digit=n%10;
    return  digit+sod_rec(n/10);
}
void main()
{
    int n;
    printf("enter n :");
    scanf("%d ",&n);
    printf("%d ",sod_rec(n));
}