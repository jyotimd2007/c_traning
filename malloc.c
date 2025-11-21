#include<stdio.h>
#include<stdlib.h>
void main()
{
    int *p=(int*)malloc(4*sizeof(int));
    p[0]=78;
    p[1]=90;
    p[2]=67;
    p[3]=98;
    printf("%d %d %d %d",p[0],p[1],p[2],p[3]);
    free(p);
}

