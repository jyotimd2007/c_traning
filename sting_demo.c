#include<stdio.h>
#include<string.h>
void main()
{
    char name[10]="jyoti";
    char new[100]="hello";
    printf("%c",name[3]);
    printf("length of string is %d\n",strlen(name));
    strcat(new, name);
    printf("%s\n",new);
    printf("%zs",strstr (new,"H"));
    
}