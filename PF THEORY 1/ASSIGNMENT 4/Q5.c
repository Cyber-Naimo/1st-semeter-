#include<stdio.h>
#include<math.h>
#include<conio.h>

void sort();		//function declaration or prototype

int main ()
{
adress[i]=sort();				// CALLING THE FUNCTION AND RETURNING THE FUCTION VALUE
printf("%d",adress[i]);
getch ();

}
void sort()			// function defination
{
	int size,i,j,ascend;
	int adress[100];
	
	printf("ENTER THE SIZE OF AN ARRAY:\n");
	scanf("%d",&size);
	
	printf("\n\nTHE ARRAY BEFORE SORTING IS SHOWN BELOW:\n");
	for(i=0;i<size;i++)
	{
		scanf("%d",&adress[i]);			// PRINTING  N ELEMENTS
	}
	
	for(i=0;i<size;i++)
	{
		for(j=i+1;j<size;j++)
		{
			if(adress[i]>adress[j])		// IN ASCENDING ORDER CONDITION
			{
				ascend = adress[i];
				adress[i]=adress[j];			// CONDITION FOR SORTING IN ASCEINDING ORDER JUST LIKE SWAPPING OF TWO ARRAY ELEMNETS
				adress[j] = ascend;
			}
		}
	}
	printf("\n\nTHE ARRAY AFTER SORTING IN ASCENDING ORDER  IS SHOWN BELOW:\n");		// SORTING IN ASCENDING ORDER
	for(i=0;i<size;i++)
	{
	
	printf("%d\n",adress[i]);		// ARRAY IN DESCENDING ORDER
	
	}
	return adrees[i];
}

