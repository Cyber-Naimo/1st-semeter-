#include <stdio.h>
#include<conio.h>

int main() 
{
  	char Area;
  	char A,R,a,r;
  	int age;
  	int person = 10;
  	int i=0,k=1,j=1;
  	
  	// NO OF PERSONS ARE GIVEN IN QUESTIONS 
  	printf("NO OF PERSONS ARE = %d\n \n ",person);
  	printf("==========================================================================\n");
 
 
  	for(i=0;i<person;i++)
  		{
  		printf("ENTER AGE OF PERSON %d \n",k++);
  		scanf("%d",&age);
  
  		printf("ENTER AREA OF PERSON %d \n",j++);
  		scanf(" %c",&Area);
 		//GIVEN CONDITION:
  		if( age>=18 && Area == 'U' || Area == 'u' )
  		{
  			printf("\nYOU ARE ELIGIBLE FOR A VACCINATION:\n");
  			printf("==========================================================================\n");
  		}
 		//GIVEN CONDITION:
		else if(age<18 && Area == 'R' || Area == 'r')
		
  		{
  			printf("YOU ARE NOT ELIGIBLE FOR A VACCINATION:\n");
  			printf("==========================================================================\n");
 
 		}
 		 
	  else 
  
  			printf("YOU ARE NOT ELIGIBLE FOR A VACCINATION\nPLEASE TRY AGAIN\n");
  			printf("==========================================================================\n");
 
		}
	getch ();
}

  
  
