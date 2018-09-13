#include<stdio.h>
void comp(int a,int b);
void main()
{
    int a,b;
    printf("enter the numbers\n");
    scanf("%d%d",&a,&b);
    comp(a,b);
}
void comp(int a,int b)
{
    if(a==b)
    {
        printf("nos. are equal");
    }
    else if(a>b)
    {
        printf("%d is greater than %d",a,b);
    }
    else
    {
        printf("%d is greater than %d",b,a);
    }
}
