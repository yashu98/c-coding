#include <stdio.h>
void comp(int a,int b,int c);

void comp(int a,int b, int c)
{
	
	if(a>b && a>c)
		printf("greatestis a");
	else if(b>a && b>c)
	    printf("greatest is b");
	else
		printf("greatest is c");
	
}

int main()
{
	int a,b,c;
	
	printf("Enter three numbers: ");
	scanf("%d%d%d",&a,&b,&c);
	comp(a,b,c);
	
	return 0;
}
