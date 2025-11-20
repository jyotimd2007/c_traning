//write a c function which will accepts one input parameter r and returns the perimeter of the circle , declare pi as const
# include <stdio.h>
float poc(int r)
{
    const float pi=3.14;
    float peri=2*3.14*r;
    return peri;
}
void main()
{
    int r=5;
    printf("\n%f",poc(r));
    int a=8;
    printf("\n%f",poc(a));
}