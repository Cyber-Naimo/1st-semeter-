		// PROGRAM TO CONVERT DECIMAL NUMBER TO BINARY NUMBER WITHOUT USING LOOP//
#include<stdio.h>         
#include<math.h>        
int main()       
{
  int num;
  int x1;
  int digit1,digit2,digit3,digit4,digit5,digit6,digit7,digit8;
  int sum=0;
	// ENTER TWO DIGIT NUMBER//
  	
  printf("******** ENTER LAST TWO DIGIT OF YOUR ROLL NO ***********\n");     
  scanf("%d", &num);  
  
	// DECIMAL TO BINARY CONVERSION//
	if((num>9) && (num<=99))
	{
		digit1=num%2;
		x1=num/2;
		digit2=x1%2;
		x1=x1/2;
		digit3=x1%2;
		x1=x1/2;
		digit4=x1%2;
		x1=x1/2;
		digit5=x1%2;
		x1=x1/2;
		digit6=x1%2;
		x1=x1/2;
		digit7=x1%2;
		x1=x1/2;
		digit8=x1%2;
		x1=x1/2;
		printf("******** THE BINARY EQUAVALENT IS %d %d %d %d %d %d %d %d *********\n",
		digit8,digit7,digit6,digit5,digit4,digit3,digit2,digit1);
		
		// BINARY TO DECIMAL CONVERSION//
		if(digit8 & 1){
			sum+=128;
		}
		if(digit7 & 1){
			sum+=64;
		}
		if(digit6 & 1){
			sum+=32;
		}
		if(digit5 & 1){
			sum+=16;
		}
		if(digit4 & 1){
			sum+=8;
		}
		if(digit3 & 1){
			sum+=4;
		}
		if(digit2 & 1){
			sum+=2;
		}
		if(digit1 & 1){
			sum+=1;
		}	
		printf("******** THE DECIMAL EQUAVALENT OF RESULTANT BINARY  IS %d ***********\n ",sum);
		printf("******** HURRAH YOUR PROGRAM IS CORRECT ! *******");	
	}
	else 
	{
	printf("********** ENTER VALID INPUT OR PLEASE TRY AGIAN! ********");
}

	}
