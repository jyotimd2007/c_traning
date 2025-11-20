//write a c program which will accept an array arr,its size as n and returns the difference between 1st and last element//
#include<stdio.h>
#include<stdlib.h>
int sub_arr (int arr[],int n)
{
    int sub=arr[0]-arr[n-1];
    return abs(sub);
}
void main()
{
    int arr[5]={31,45,62,32,44};
    int n=5;
    printf("%d",sub_arr(arr,n));
}