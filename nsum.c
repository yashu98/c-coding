#include <stdio.h>

void main()
{
    

int n,i,a[4],sum=0;
printf("enter the numbers to be summed");
scanf("%d",&n);
printf("enter the numbers");
for(i=0;i<n;i++)
{
    scanf("%d",&a[i]);
    
}
for(i=0;i<n;i++)
{
    sum=sum+a[i];
}
printf("sum is %d",sum);

    
}
