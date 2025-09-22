#include<stdio.h>
int main()
{
	int arr[5];
	int i=0;
	while(i<5)
	{
		printf("Enter elemnt at index %d: ",i);
		scanf("%d",&arr[i]);
		i++;
	}
      printf("\n Array elemrnt are :   ");
      for(i=0; i<5;i++)
      {
      	printf("%d ",arr[i]);
	  }
	  return 0;
}

