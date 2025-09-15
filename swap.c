#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enetr a number:");
	scanf("%d",&a);
	printf("Enetr a number:");
	scanf("%d",&b);
	
	c=a;
	a=b;
	b=c;
    printf("After sawpping: a=%d ,b=%d\n",a,b);
	
	return 0;
	
}
