#include<stdio.h>
int main()
{
	int n,i;
	printf("Enter a number:");
	scanf("%d",&n);
	
	printf("Square of the %d natural number are:\n",n);
	
	for(i=1;i<=n;i++)
	{
		printf("%d^2=%d\n",i,i*i);
	}
	return 0;
}
