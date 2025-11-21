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
     strcpy(s1.name,"joey");
     s1.age=19;
     s1.marks=89.6;
     

     struct student s2;
     strcpy(s2.name,"raj");
     s2.age=18;
     s2.marks=79.6;
     

     struct student s3={"popoye",17,99.7};
     printf("%s ",s3.name);
     printf("%d ",s3.age);
     printf("%f ",s3.marks);

}