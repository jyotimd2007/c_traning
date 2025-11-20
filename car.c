#include<stdio.h>
void main()
{
    int t;
    int sale;
    int qty[3]={3,4,10};
    int cost[3]={4,6,1};
    for (int i = 0; i < 3; i++)
    {
        t=qty[i]*cost[i];
        sale=sale+t;
    }
    printf("total sale is %d",sale);
}