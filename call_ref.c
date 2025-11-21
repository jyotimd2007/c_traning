//write a function which will multi 3 numbers and call it by reference//
#include<stdio.h>
void prod_ref(int *a,int *b,int *c)
{
   int prod=(*a )*(*b)*(*c);
   printf("%d",prod);
}
void main()
{
    int a=67;
    int b=46,c=89;
    prod_ref(&a,&b,&c);
}