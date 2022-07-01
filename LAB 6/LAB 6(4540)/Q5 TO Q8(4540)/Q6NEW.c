#include<stdio.h>
int main(){
		int CLASS;
		int Amount1,Amount2,Amount3;
		int AC,ECONOMY,BUSSNISS;
		int NO_ITEMS,item,quantity,TOTAL_AMOUNT;
	
		// WELCOME TO TRAIN RESERVATION SYSTEMM//

	printf("************************ TRAIN CLASSES  AVAILABLE ARE *********************\n"
				"1) AC STANDARD CLASS!\n"
				"2) ECONOMY CLASS\n"
				"3) BUSSNISS CLASS!\n");
	
	printf("ENTER THE NUMBER OF CLASSES DO YOU WANT TO PURCHASE!\n");
	scanf("%d",&NO_ITEMS);
	
		printf("************************TRAIN CLASSES AVAILABLE ARE *********************\n"
				"1) ENTER 1 FOR ECONOMY!\n"
				"2) ENTER 2 FOR AC!\n"
				"3) ENTER 3 FOR BUSSNISS!\n");
				printf("--------------------------------------------------\n");
		
	if (NO_ITEMS == 1)
	{
		printf("ENTER THE CLASS WHICH YOU WOULD  LIKE TO TRAVEL \n");
		scanf("%d",& CLASS);
		
		if ( CLASS == 1 )
		{
			printf("ENTER THE NO OF ECONOMY CLASS TICKETS YOU WANT TO PURCHASE !\n ");
			scanf("%d",&quantity);
			Amount1= quantity * 600;
			printf("\n YOU HAVE PURCHASED %d ECONOMY CLASS TICKETS  WITH A FARE  OF %d\n",quantity,Amount1);
			TOTAL_AMOUNT = Amount1; 
			printf("THE TOTAL FARE IS %d",TOTAL_AMOUNT);
		}
		
		else if (CLASS == 2)
		
		{
			printf("ENTER THE NO OF AC CLASS TICKETS YOU WANT TO PURCHASE !\n ");
			scanf("%d",&quantity);
			Amount2= quantity * 1000;
			printf("\n YOU HAVE PURCHASED %d AC CLASS TICKETS WITH A FARE  OF %d\n",quantity,Amount2);
			TOTAL_AMOUNT = Amount2; 
			printf("THE TOTAL FARE IS %d",TOTAL_AMOUNT);
		}
		
		else if ( CLASS ==3)
		
		{
			printf("ENTER THE NO OF BUSSNISS CLASS TICKETS YOU WANT TO PURCHASE !\n ");
			scanf("%d",&quantity);
			Amount3= quantity * 2000;
			printf("\n YOU HAVE PURCHASED %d BUSSNISS CLASS TICKETS WITH A FARE OF %d\n",quantity,Amount3);
			TOTAL_AMOUNT = Amount3;
			printf("THE TOTAL FARE IS %d",TOTAL_AMOUNT);
		}
		else
		{
			printf("PLEASE SELECT VALID OPTION PLEASE CHOOSE BETWEEN 1 TO 3 !\n");
		}
	}
	else if (NO_ITEMS==2)
		{
		printf("ENTER THE FIRST CLASS!\n");
		scanf("%d",&ECONOMY);
		printf("ENTER THE SECOND CLASS!\n");
		scanf("%d",&AC);
		
		
		if( ECONOMY == 1 && AC == 2)
		{
			printf("ENTER THE NO OF ECONOMY CLASS TICKETS  YOU WANT TO PURCHASE !\n");
			scanf("%d",&quantity);
			Amount1= quantity * 600;
			
			
			printf("ENTER THE NO OF AC CLASS TICKETS  YOU WANT TO PURCHASE !\n ");
			scanf("%d",&quantity);
			Amount2= quantity*1000;
			
			printf("\n YOU HAVE PURCHASED %d ECONOMY CLASS TICKETS WITH A FARE OF %d\n",quantity,Amount1);
			
			printf("\n YOU HAVE PURCHASED %d AC CLASS TICKETS WITH A FARE OF %d\n",quantity,Amount2);
			
			TOTAL_AMOUNT = Amount1 + Amount2; 
			printf("THE TOTAL FARE IS %d",TOTAL_AMOUNT);
		}
		else if ( ECONOMY == 1 && BUSSNISS == 3)
		{	
	
			printf("ENTER THE NO OF ECONOMY CLASS TICKETS YOU WANT TO PURCHASE !\n");
			scanf("%d",&quantity);
			Amount1= quantity * 600;
			
			
			printf("ENTER THE NO OF BUSSNISS CLASS TICKETS  YOU WANT TO PURCHASE !\n ");
			scanf("%d", &quantity);
			Amount3= quantity*2000;
			
			printf("\n YOU HAVE PURCHASED %d ECONOMY CLASS TICKETS WITH A FARE OF %d\n",quantity,Amount1);
			
			printf("\n YOU HAVE PURCHASED %d BUSSNISS CLASS TICKETS WITH A FARE OF %d\n",quantity,Amount3);
			
			TOTAL_AMOUNT = Amount1 + Amount3;
			printf("THE TOTAL FARE IS %d",TOTAL_AMOUNT);
		}
		
		else if (AC == 2 && BUSSNISS == 3)
		{
			printf("ENTER THE NO OF AC CLASS TICKETS YOU WANT TO PURCHASE !\n ");
			scanf("%d",&quantity);
			Amount2 = quantity*1000;
			
			printf("ENTER THE NO OF BUSSNISS CLASS TICKETS YOU WANT TO PURCHASE !\n ");
			scanf("%d",&quantity);
			Amount3 = quantity*2000;
			
			printf("\n YOU HAVE PURCHASED %d AC CLASS TICKETS WITH A FARE OF %d\n",quantity,Amount2);
			
			printf("\n YOU HAVE PURCHASED %d BUSSNISS WITH A FARE OF %d\n",quantity,Amount3);
			
			TOTAL_AMOUNT =  Amount2 + Amount3;
			printf("THE TOTAL FARE IS %d",TOTAL_AMOUNT);
			
		}
		else 
		{
			printf("PLEASE SELECT VALID OPTION PLEASE CHOOSE BETWEEN 1 TO 3 !\n");
		}
	}
		
	else if (NO_ITEMS == 3)
		{
			printf("ENTER THE NO OF ECONOMY CLASS TICKETS YOU WANT TO PURCHASE !\n ");
			scanf("%d",&quantity);
			Amount1=quantity * 600;
			
			printf("ENTER THE NO OF AC CLASS TICKETS YOU WANT TO PURCHASE !\n ");
			scanf("%d",&quantity);
			Amount2= quantity*1000;
			
			printf("ENTER THE NO OF BUSSNISS CLASS TICKETS YOU WANT TO PURCHASE !\n ");
			scanf("%d",&quantity);
			Amount3= quantity*2000;
			
			printf("\n YOU HAVE PURCHASED %d ECONOMY CLASS TICKETS WITH A FARE OF %d\n",quantity,Amount1);
			
			printf("\n YOU HAVE PURCHASED %d AC CLASS TICKETS WITH A FARE OF %d\n",quantity,Amount2);
			
			printf("\n YOU HAVE PURCHASED %d BUSSNISS WITH A FARE OF %d\n",quantity,Amount3);
			
			TOTAL_AMOUNT = Amount1 + Amount2 + Amount3;
			printf("THE TOTAL FARE IS %d",TOTAL_AMOUNT);
			
				
		}
			else 
			{
				printf("PLEASE SELECT VALID OPTION PLEASE CHOOSE BETWEEN 1 TO 3 !\n");
			}
			
			return 0;
	}
		
	
