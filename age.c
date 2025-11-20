#include <stdio.h>
void main()
{
    int age;
    float height;
    printf("enter age:");
    scanf("%d",&age);
    printf("enter height:");
    scanf("%f",&height);
    if ((age>12) && (height>4.5)) // 13>12 ? T and 5>4.5? T ==> T
    {
        printf("you can ride the roller coaster!");

    }
    else
    {
        printf("grow up and come back!");
    }
}