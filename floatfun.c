#include<stdio.h>
void add(float a,float b);
void main()
{
    float p,q;
    printf("enter the numbers");
    scanf("%f%f",&p,&q);
    add(p,q);
}
void add(float a,float b)
{
    float sum=0;
    sum=a+b;
    printf("the sum is %f",sum);
    
}
