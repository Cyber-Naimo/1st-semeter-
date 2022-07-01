#include<stdio.h>
#include<math.h>
#include<conio.h>
//int COUNTFREQUENCY(int)
int main()
{
	void COUNTFREQUENCY();		// FUNCTION DECLARATION
	COUNTFREQUENCY();			// FUNCTION CALL
	getch ();
}


void COUNTFREQUENCY()				// FUNCTION DEFINATION
{
int size,i,j;
int b[100000]={0};

printf("COUNT FREQUENCY OF EACH ELEMENTS OF ARRAY:\n=======================================\n");
printf("ENTER NO OF ELEMENTS TO BE STORED IN AN ARRAY:\n");
scanf("%d",&size);

int num[size];

printf("ENTER %d ELEMENTS IN AN ARRAY:\n",size);
printf("array[%d]\n",size);	

for(i=0;i<size;i++)

{

scanf("%d",&num[i]);		/// ENETRING ARRAY ELEMENTS
	
if(num[i]<0 || num[i]>9)
{
	printf("ERROR\n");			// CONDITION FOR 1 DIGIT NO
}

}
	
		printf("THE FREQUENCY OF ALL ELEMENTS OF ARRAY ARE:\n");
	
	
		for(i=0;i<size;i++)
		{
			
			b[num[i]]++;			// COMPARING ONE ARRAY WITH PREVIUS ARRAY AND INCREAMENTING IT
			
		}
		for(i=0;i<100000;i++)
		{
			if(b[i])		//	CONDITION FOR COUNTING FREQUENCY
			{
				
				printf("THE %d OCCURS %d TIMES:\n",i,b[i]);		
				
			}
		}
	
	}
		
