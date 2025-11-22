//write a c program which add 3 num and call by ref//
#include<stdio.h>
void add_ref(int *a,int *b,int *c)
{
    int sum=*a+*b+*c;
    printf("%d ",sum);
}
void main()
{
    int a=5,b=7,c=8;
    add_ref(&a,&b,&c);
}
