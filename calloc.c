#include<stdio.h>
#include<stdlib.h>
void main()
{
    float*p=(float*)calloc(4,sizeof(float));
    p[0]=89.67;
    p[1]=78.78;
    p[2]=67.90;
    p[3]=56.67;
    printf("%f %f %f %f",p[0],p[1],p[2],p[3]);
    free(p);
}