#include<stdio.h>
int main()
{
    int i, n,sm, elem;
    printf ("Enter total number of elements \n");
    scanf ("%d", &elem);
    printf ("Enter first number \n");
    scanf ("%d", &n);
    sm=n;
    for (i=1; i<= elem -1 ; i++)
    {
        printf ("\n Enter another number \n");
        scanf ("%d",&n);
        if (n<sm)
        sm=n;
    }
    printf ("\n The smallest number is %d", sm);
    return 0;
}
