#include<stdio.h>

int main()
{
	int AC_number,no_products;
	int  i=1;
	int  j=1;
	float beginning_balance,total_charges;
	float credit,credit_limit,new_balance,charges;
	
	printf("\n ENTER ACCOUNT NUMBER:\n");
	scanf("%d",&AC_number);
	
	printf("ENTER BEGINNNING BALANCE:\n");
	scanf("%f",&beginning_balance);
	
	printf("HOW MANY PRODUCTS YOU WOULD LIKE TO ENTER:\n");
	scanf("%d",&no_products);
	
	for (i;i<=no_products;i++)
	{
		
		
		
		printf("ENETR CHARGES FOR ITEM %d\n",j++);
		scanf("%f",&charges );
		total_charges+=charges;
		
	}
		printf(" YOUR TOTAL SUM IS %f \n \n \n ",total_charges);
	
	
		printf("ENTER TOTAL CREDITS:\n");
		scanf("%f",&credit);
		
		printf("ENTER CREDIT LIMIT:\n");
		scanf("%f",&credit_limit);
		
		 new_balance = (beginning_balance + total_charges - credit_limit);
		 
		printf("ACCOUNT NUMBER: %d\n \n",AC_number);
		
		printf("CREDIT LIMIT: %f\n \n",credit_limit);
		
		printf("NEW BALANCE : %f\n \n",new_balance);
		
		if(new_balance>credit_limit)
		{
			printf("CREDIT LIMIT EXCEEDED");
		}
		else
		{
		printf("CREDIT LIMIT NOT  EXCEEDED");
		}
		
		
}
