#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct student
{
    char name[100];
    int age;
    float marks;
};
void main()
{
    struct student s1;
    struct student *p=&s1;
    strcpy(p->name,"jyoti");
    p->age=18;
    p->marks=89.7;
    printf("%s\n",p->name);
    printf("%d\n",p->age);
    printf("%f\n",p->marks);
}