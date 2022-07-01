#include <stdio.h>
int main()
{
    float amount, discount, afterdiscount;
    printf("COST OF THE ITEM IS: ");
    scanf("%f",&amount);
    
   
         if (amount>=2000 && amount<=4000) 
	{
		printf("ACTUAL AMOUNT IS:%f\n", amount);
   	 	discount=amount*0.2;
    	  printf("THE SAVED AMOUNT IS:%f\n",discount);
   	 	afterdiscount=amount-discount;
   		 printf("THE AMOUNT AFTER DISCOUNT:%f \n",afterdiscount); }
  
  
  	
  	else if (amount>4000 && amount<=6000)
{
	 
		printf("ACTUAL AMOUNT IS:%f\n", amount);
   		 discount=amount*0.3;
     	 printf("THE SAVED AMOUNT IS:%f\n",discount);
   			 afterdiscount=amount-discount;
    	printf("THE AMOUNT AFTER DISCOUNT:%f \n",afterdiscount);	}
 
  	 else  if(amount>6000 )
    
{
	
		printf("ACTUAL AMOUNT IS:%f\n", amount);
   		 discount=amount*0.5;
     	 printf("THE SAVED AMOUNT IS:%f\n",discount);
   		 afterdiscount=amount-discount;
    	printf("THE AMOUNT AFTER DISCOUNT:%f \n",afterdiscount); 
     }
     
	else
	printf("SORRY! YOU ARE NOT ELIGIBLE FOR DISCOUNT!");
    }
    
  
    
  

