#include<stdio.h>
#include<math.h>
#include<conio.h>

void increament();			//function declaration or prototype

int main ()
{
increament();			// CALLING THE FUNCTION AND RETURNING THE FUCTION VALUE
getch ();

}
void increament()			// function defination
{
	int i,j,size=5;
	int num[100];
	printf("THE SIZE OF AN ARRAY ARE %d\n\n\n",size);		// initialize size upto 5
	
	printf("THE ARRAY ELEMENTS BEFORE INCREAMENTING:\n\n\n");
	
	printf("ENTER %d ARRAY ELEMENTS:\n",size);		// ENTERING ARRAY ELEMNTS
	for(i=0;i<size;i++)
	{
		scanf("%d",&num[i]);
	}
	
		printf("THE ARRAY ELEMENTS AFTER INCREAMENTING:\n");
		
		for(i=0;i<size;i++)
		{
				
				num[i]+=2;				// CONDITION FOR INCREAMENTING THE ARRAY BY 2;
				
				printf("%d\n",num[i]);		// PRINTING  INCREAMENTING ARRAY BY 2
		}

}


