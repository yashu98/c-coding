#include <stdio.h>
void num(int a[10]);
int main()
{
    int a[10];
    num(a);
    return 0;
}
void num(int a[10])
{
    int i,n;
    printf("enter the value of n");
    scanf("%d",&n);
    printf("enter the numbers");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
}
