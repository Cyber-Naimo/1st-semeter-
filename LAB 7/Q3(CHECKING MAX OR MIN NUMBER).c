#include<stdio.h>

int main()
{
	int number,max,min;
	
	printf("**********ENETR 0 TO TERMINATE THE PROGRAM************\n");
	scanf("%d",&number);
	
	//defining condition
	max=number;
	min=number;
	
	//using while loop becuase the exact no is not defined
	while(number!=0)
	{
		if(number>max)
		{
			max=number;
		}
		if(number<min)
		{
			min=number;
		}
		printf("ENTER NUMBERS:\n ");
		scanf("%d",&number);
		
	}
	printf("THE MAXIMUM NUMBER IS %d\n",max);
	printf("THE MINIMUM NUMBER IS %d\n",min);
}
	

	
