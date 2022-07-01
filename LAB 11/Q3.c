#include<stdio.h>
#include<math.h>
#include<conio.h>
void MinMaxArray(int arr[],int size,int *max,int *min);
int main ()
{
	int size, min, max,i;
	printf("ENTER SIZE OF AN ARRAY:\n");
	scanf("%d",&size);
	
	int arr[size];
	printf("ENTER ARRAY ELEMEMNTS:\n");
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	MinMaxArray(arr,size,&min,&max);			// CALLING FUNCTION 
	printf("MIN VALUE=\t%d\nMAX VALUE=\t%d",min,max);
	getch ();


}

void MinMaxArray(int arr[],int size,int *max,int *min)		// FUNCTION DECLARATION
{
	int i,*ptr;
	
	*max=arr[0];			// Initializing Min and Max to 0
	*min= arr[0];
	
	for(i=0;i<size;i++)			// FOR CHECKING EACH ELEMENT OF ARRAY
	{
		if(arr[i]<*max)			//MAX CONDITION WHEN ARRAY ELEMENT IN LOOP FIND MAX NUMBER ASSIGNING MAX TO IT
		{
			*max=arr[i];
		}
		if(arr[i]>*min)			//MIN CONDITION WHEN ARRAY ELEMENT IN LOOP FIND MIN NUMBER ASSIGNING MIN TO IT
		{
			*min = arr[i];
		}
	}
}
