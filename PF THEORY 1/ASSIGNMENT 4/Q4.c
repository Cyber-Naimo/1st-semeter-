#include<stdio.h>
#include<math.h>
#include<conio.h>
#define size 10
			//function declaration or prototype
struct input
{
	int sum,min,max;
};
	struct input d;

struct input display();			//function declaration or prototype

int main()
{
	display();			// CALLING THE FUNCTION AND RETURNING THE FUCTION VALUE
	

}
void display(void)		// function defination
{
	int k,num[100],i,sum=0;
	int min,max;

	
	printf("ENTER %d ARRAY ELEMENTS:\n",size);			// GIVEN CONDITION ENTER 10 ARRAY ELEMENTS
	for(i=0;i<size;i++)
	{	
	scanf("%d",&num[i]);
	sum+=num[i];		//CONDITION FOR SUM OF ARRAY ELEMENTS
			
	}
	max = num[0];			// INITIALIZING THE MIN AND MAX ARRAY TO 0;
	min = num[0];
	for(i=0;i<size;i++)		// LOOP FOR CHECHKING
	{
		if(num[i]>max)		//CONDITION FOR MAX IN  ARRAY ELEMENTS
		{
			max =num[i];
		}
		if(num[i]<min)			//CONDITION FOR MIN IN  ARRAY ELEMENTS
		{
			min = num[i];
		}
	}
	printf("THE MIN VALUE IS %d\nTHE MAX VALUE IS %d\n",min,max);		// returning min and max value from the function
	printf("THE SUM OF ARRAY ELEMENTS ARE %d",sum);
}


