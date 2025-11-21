#include<stdio.h>
#include<stdlib.h>
void main()
{
    float *p=(float*)malloc(4*sizeof(float));
    p[0]=78;
    p[1]=90;
    p[2]=56;
    p[3]=75;
    printf("%f %f %f %f",p[0],p[1],p[2],p[3]);
    free(p);

}