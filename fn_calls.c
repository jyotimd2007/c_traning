#include<stdio.h>
void sum_value(int a,int b)
{
    int sum=a+b;
    printf("%d ",sum);
}
void sum_ref(int *a,int *b)
{
    int sum=*a+*b;
    printf("%d ",sum);
}
void main()
{
    int a=80;
    int b=90;
    sum_value(a,b);//calling by values
    sum_ref(&a,&b);//calling by ref
}