//write a c function which will accept 3 parameters l,b,h and returns volume of the cube//
#include<stdio.h>
int volume(l,b,h)
{
    int vol=l*b*h;
    return vol;
}
void main()
{
    int l=5,b=7,h=2;
    printf("\n%d",volume(l,b,h));
    int a=3,c=6,d=7;
    printf("\n%d",volume(a,c,d));
}