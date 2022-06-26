#include<stdio.h>
#include<math.h>
#include<conio.h>
int main()
 {	
 	 int x;
     int fact = 1,number;
	 float sum=0;
     int i=1,j=1;
     int gcd;
     int A,B;
     
     A = 42;
     B = 98;
     
     //  YOU CAN ALSO MAKE  PROGRAM GENERAL FIRSTLY YOU CAN FIND HIGHEST COMMON FACTOR (HCF) OF TWO NUMBERS
	//     printf("ENTER TWO NUMBER :\n");
	//     scanf("%d \n %d",&A,&B);

 		do
		  
    	{  
        	if(A % j == 0 && B % j== 0)  
        	{  
        	
           	 gcd = j;  
           	 
        	}  
        	 j++;  
    	}  while(j <= A && j <= B);
    	
//		printf("================================================================================================================\n");
  		printf("\nLARGEST WHOLE FACTOR OF %d AND  %d IS = %d\n",A,B,gcd);
// 		printf("================================================================================================================\n");  
// 		
  		 //TAYLOR SERIES 
			// NOW WE ARE FINDING TAYLOR SERIES WITH THE HELP OF (HCF) OF NUMBERS:
			// HERE X IS (n) and GCD IS (N)   
//		printf("=================================================================================================================\n");
    	printf("\n\n ENTER POSITIVE REAL VALUES OF X:");
    	scanf("%d",&x);
    	
    	// USING FOR LOOP FOR SUM OF TAYLOR SERIES:
    	
  			do
    			{
    				// USING GIVEN FORMULA
        			fact = fact*i;
        			i++;
        			sum = sum + (pow(x,i)/fact) ;

    			} while( i <= gcd);
    		
    			sum = sum + 1; // TAYLOR  series starts with 1
    			printf("\n\n THE SUM OF TAYLOR SERIES IS %.2f  \n\n",sum);
    			
//			printf("==============================================================================================================\n");
//   			
//			printf("==============================================================================================================\n");
//			printf("==============================================================================================================\n");
//			printf("==============================================================================================================\n");
//			getch ();
    		return 0;
}
