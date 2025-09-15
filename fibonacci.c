#include<stdio.h>
int main()
{
	int t1=0,t2=1,t3,n;
	printf("Enter a no.of term");
	scanf("%d",&n);
	
	int i;
	printf("%d" "%d", t1 ,t2);
	for(i=0;i<n-2;i++)
	{
		t3=t1+t2;
		printf("%d",t3);
		t1=t2;
		t2=t3;
	}
	return 0;
}
