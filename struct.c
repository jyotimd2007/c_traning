//create a structe with three name of car, with max speed ,price store these in a array of structures and display them//
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct car
{
    char name[100];
    int speed;
    int price;
};
void main()
{
    int n;
    printf("enter the numbers of car :");
    scanf("%d",&n);
    struct car b[3];
    for (int i=0;i<n;i++)
    {
        printf("enter name of car :");
        scanf("%s",b[i].name);

        printf("enter the speed of car :");
        scanf("%d",&b[i].speed);

        printf("enter the price :");
        scanf("%d",&b[i].price);
    }
    printf("your information :");
    for(int i=0;i<n;i++)
    {
        printf("%s\n",b[i].name);
        printf("%d\n",b[i].speed);
        printf("%d\n",b[i].price);
    }


}
