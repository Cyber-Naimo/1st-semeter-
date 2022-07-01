#include<stdio.h>
int main()
{
	int num,i,j;
	
	printf("================***** THE PRIME NUMBER BETWEEN 1 TO 100 ARE************ ============================ \n");
	
	
	
	 
	 	 
	 	 	 for (num=1;num<=100;num++)
			   {
			   	j=0;
			   	for(i=2;i<=num/2;i++)
			   	{
			   		if(num%i == 0)
		  			{
		  				j++;
		  				break;
				   }
	 	 	 	
				}
				if(j == 0 && num!=1){
					printf("%d  ",num);
				}
			}
			
			
		  
		   
		 
		 
} 
