#include<stdio.h>
#include<conio.h>
int main()
{
	int number;
	int i=1;
	int positive=0,negative=0,zeros=0,LIMIT;
	
	printf("=======================================================================================\n");
	printf("******************* HOW MANY NUMBERS YOU WANT TO ENTER:******************************\n");
	printf("=======================================================================================\n");
	scanf(" %d",&LIMIT);
	
	if ( LIMIT > 0)
	{
	
	while(LIMIT!=0)
		{
		printf("=======================================================================================\n");
		printf("ENTER NUMBER %d\n",i++);
		scanf("%d",&number);
		
		// USING TERNARY OPERATOR:
		(number>0) ? (positive++) : ((number<0) ? (negative++) :(zeros++));
		LIMIT--;
		}
	printf("=======================================================================================\n");
	printf("THE NUMBER OF POSITIVE  IS %d \n",positive);
	
	printf("=======================================================================================\n");
	printf("THE NUMBER OF NEGATIVE  IS %d \n",negative);
	
	printf("=======================================================================================\n");
	printf("THE NUMBER OF ZEROS  IS %d \n",zeros);
	printf("=======================================================================================\n");
	
	// USING TERNARY OPERATORS TO FIND MAJRITY OF COUNT AND ALSO IF THE MAJORITY IS SAME OR EQUAL :
	
	// FOR POSITIVE
	(positive > negative && positive  > zeros)  ?   printf("THE MAJORITY OF COUNT IS POSITIVE:\n") :
		
	// FOR NEGATIVE	
	((negative > positive && negative > zeros)) ?   printf("THE MAJORITY OF  COUNT IS NEGATIVE:\n") :
		
	// FOR ZEROES 	
	((zeros > negative && zeros > positive ))   ?   printf("THE MAJORITY OF COUNT IS ZERO:\n") :
		
	// FOR EQUALITY IF ANY TWO OR THREE FOUND TO BE EQUAL:	
	((positive == negative && positive != zeros))?  printf("THE MAJORITY OF POSITIVE AND NEGATIVE IS EQUAL ") :	
	
	((zeros == positive && zeros != negative )) ?   printf("THE MAJORITY OF POSITIVE AND ZEROS IS EQUAL ") :
		
	((zeros == negative && zeros != positive )) ?   printf("THE MAJORITY OF NEGATIVE AND ZEROS IS EQUAL ") :	
		
	((positive == negative && positive == zeros)) ? printf("THE MAJORITY OF POSITIVE, ZEROS, AND  NEGATIVE IS EQUAL ") :
		
	getch ();
		}
	
	else 
		printf("ENTER REAL VALUES,PLEASE TRY AGAIN");
	
}
