#include <stdio.h>
#include <conio.h>

int main() 
{
	int i=0,j=1;
	char condition;
  	char n,N,A,a,normal,abnormal;
 	 n = normal;
 	 A = abnormal;
  
  
	printf("INPUT THE CHARACTER :\n");
  	scanf("%c",&condition);
  	if( condition == 'n' || condition == 'N')
  
   {
  
  		printf("#######\n"); // IT WILL PRINT IN VERTICAL
	  	for(j=0;j<6;j++)
	  	
	  		{
	  			printf("#");
	
	  			for(i=0;i<7;i++)   // IT WILL PRNT THE LINE IN HORIZANTAL WAY 
	  			
	  			{
	  				printf("NormalSuitation");
	  			}
	  			
	  				printf("#\n");
   
			}
	
	}
	
	else if (condition == 'A' || condition == 'a')
		{
			printf("******\n");
	  		for(j=1;j<=7;j++)   // IT WILL PRINT IN VERTICAL
	  			{
	  	
		  			printf("*");
	  
	  			for(i=0;i<=5;i++)           // IT WILL PRNT THE LINE IN HORIZANTAL WAY 
	  				{
	  				printf("AbnormalSuitation");
	  	
	  				}
	  				printf("*\n");
	  
					}
					
					printf("******");
		}
		
		
		else
		printf("ERROR! PLEASE INPUT CORRECT CHARACTER:");
		getch ();
		
	}
		
	
	
