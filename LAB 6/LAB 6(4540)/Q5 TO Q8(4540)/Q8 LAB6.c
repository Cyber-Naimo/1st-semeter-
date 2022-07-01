#include<stdio.h>
int main(){
		char chr;
		int Amount1,Amount2,Amount3;
		int USB,HANDFREE,CHARGER;
		int NO_ITEMS,item,quantity,TOTAL_AMOUNT;
	
		// WELCOME TO NAIMAT MOBILE CUMMUNICATION SHOP//

	printf("************************ITEM AVAILABLE ARE *********************\n"
				"1) USB!\n"
				"2) HANDFREE!\n"
				"3) CHARGER!\n");
	
	printf("ENTER THE NUMBER OF ITEMS DO YOU WANT TO PURCHASE!\n");
	scanf("%d",&NO_ITEMS);
	
		printf("************************ITEM AVAILABLE ARE *********************\n"
				"1) ENTER 1 FRO USB!\n"
				"2) ENTER 2 FOR HANDFREE!\n"
				"3) ENTER 3 FOR CHARGER!\n");
				printf("--------------------------------------------------\n");
		
	if (NO_ITEMS == 1)
	{
		printf("ENTER WHICH ITEM YOU WANT TO PURCHASE! ");
		scanf("%d",&item);
		
		if ( item == 1 )
		{
			printf("ENTER THE NO OF USB'S YOU WANT TO PURCHASE !\n ");
			scanf("%d",&quantity);
			Amount1= quantity * 800;
			printf("\n YOU HAVE PURCHASED %d USB'S WITH A AMOUNT OF %d\n",quantity,Amount1);
			TOTAL_AMOUNT = Amount1; 
			printf("THE TOTAL AMOUNT IS %d",TOTAL_AMOUNT);
		}
		
		else if ( item == 2)
		
		{
			printf("ENTER THE NO OF HANDFREE'S YOU WANT TO PURCHASE !\n ");
			scanf("%d", &quantity);
			Amount2= quantity * 1000;
			printf("\n YOU HAVE PURCHASED %d HANDFREE'S WITH A AMOUNT OF %d\n",quantity,Amount2);
			TOTAL_AMOUNT = Amount2; 
			printf("THE TOTAL AMOUNT IS %d",TOTAL_AMOUNT);
		}
		
		else if ( item==3)
		
		{
			printf("ENTER THE NO OF CHARGER YOU WANT TO PURCHASE !\n ");
			scanf("%d",&quantity);
			Amount3= quantity * 2000;
			printf("\n YOU HAVE PURCHASED %d CHARGER WITH A AMOUNT OF %d\n",quantity,Amount3);
			TOTAL_AMOUNT = Amount3;
			printf("THE TOTAL AMOUNT IS %d",TOTAL_AMOUNT);
		}
		else
		{
			printf("PLEASE SELECT VALID OPTION PLEASE CHOOSE BETWEEN 1 TO 3 !\n");
		}
	}
	else if (NO_ITEMS==2)
		{
		printf("ENTER THE FIRST ITEM!\n");
		scanf("%d",&USB);
		printf("ENTER THE SECOND ITEM!\n");
		scanf("%d",&HANDFREE);
		
		
		if( USB == 1 && HANDFREE == 2)
		{
			printf("ENTER THE NO OF USB'S YOU WANT TO PURCHASE !\n");
			scanf("%d",&quantity);
			Amount1= quantity * 800;
			
			
			printf("ENTER THE NO OF HANDFREE'S YOU WANT TO PURCHASE !\n ");
			scanf("%d",&quantity);
			Amount2= quantity*1000;
			
			printf("\n YOU HAVE PURCHASED %d USB'S WITH A AMOUNT OF %d\n",quantity,Amount1);
			
			printf("\n YOU HAVE PURCHASED %d HANDFREE WITH A AMOUNT OF %d\n",quantity,Amount2);
			
			TOTAL_AMOUNT = Amount1 + Amount2; 
			printf("THE TOTAL AMOUNT IS %d",TOTAL_AMOUNT);
		}
		else if ( USB == 1 && CHARGER == 3)
		{	
			printf("ENTER THE THIRD ITEM!\n");
			scanf("%d",&CHARGER);
			printf("ENTER THE NO OF USB'S YOU WANT TO PURCHASE !\n");
			scanf("%d",&quantity);
			Amount1= quantity * 800;
			
			
			printf("ENTER THE NO OF CHARGERS YOU WANT TO PURCHASE !\n ");
			scanf("%d", &quantity);
			Amount3= quantity*2000;
			
			printf("\n YOU HAVE PURCHASED %d USB'S WITH A AMOUNT OF %d\n",quantity,Amount1);
			
			printf("\n YOU HAVE PURCHASED %d CHARGERS WITH A AMOUNT OF %d\n",quantity,Amount3);
			
			TOTAL_AMOUNT = Amount1 + Amount3;
			printf("THE TOTAL AMOUNT IS %d",TOTAL_AMOUNT);
		}
		
		else if (HANDFREE == 2 && CHARGER == 3)
		{
			printf("ENTER THE NO OF HANDFREE YOU WANT TO PURCHASE !\n ");
			scanf("%d",&quantity);
			Amount2 = quantity*1000;
			
			printf("ENTER THE NO OF CHARGERS YOU WANT TO PURCHASE !\n ");
			scanf("%d",&quantity);
			Amount3 = quantity*2000;
			
			printf("\n YOU HAVE PURCHASED %d HANDFREE WITH A AMOUNT OF %d\n",quantity,Amount2);
			
			printf("\n YOU HAVE PURCHASED %d CHARGERS WITH A AMOUNT OF %d\n",quantity,Amount3);
			
			TOTAL_AMOUNT =  Amount2 + Amount3;
			printf("THE TOTAL AMOUNT IS %d",TOTAL_AMOUNT);
			
		}
		else 
		{
			printf("PLEASE SELECT VALID OPTION PLEASE CHOOSE BETWEEN 1 TO 3 !\n");
		}
	}
		
	else if (NO_ITEMS == 3)
		{
			printf("ENTER THE NO OF USB'S YOU WANT TO PURCHASE !\n ");
			scanf("%d",&quantity);
			Amount1=quantity * 800;
			
			printf("ENTER THE NO OF HANDFREE'S YOU WANT TO PURCHASE !\n ");
			scanf("%d",&quantity);
			Amount2= quantity*1000;
			
			printf("ENTER THE NO OF CHARGERS YOU WANT TO PURCHASE !\n ");
			scanf("%d",&quantity);
			Amount3= quantity*2000;
			
			printf("\n YOU HAVE PURCHASED %d USB'S WITH A AMOUNT OF %d\n",quantity,Amount1);
			
			printf("\n YOU HAVE PURCHASED %d HANDFREE WITH A AMOUNT OF %d\n",quantity,Amount2);
			
			printf("\n YOU HAVE PURCHASED %d CHARGERS WITH A AMOUNT OF %d\n",quantity,Amount3);
			
			TOTAL_AMOUNT = Amount1 + Amount2 + Amount3;
			printf("THE TOTAL AMOUNT IS %d",TOTAL_AMOUNT);
			
				
		}
			else 
			{
				printf("PLEASE SELECT VALID OPTION PLEASE CHOOSE BETWEEN 1 TO 3 !\n");
			}
			
			return 0;
	}
		
	
