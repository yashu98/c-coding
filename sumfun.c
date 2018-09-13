#include<stdio.h>
void add(int a,int b);
void main()
{
    int p,q;
    printf("enter the numbers");
    scanf("%d%d",&p,&q);
    add(p,q);
}
void add(int a,int b)
{
    int sum=0;
    sum=a+b;
    printf("the sum is %d",sum);
    
}
