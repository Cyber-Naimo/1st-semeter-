#include <stdio.h>  
#include <math.h>  
  
int main() {
	float a, b, c;  
    	float root1, root2;  
    	float denominator, root_part;
	int discriment;  
  
    	printf("Enter values of\n a=\n b=\n c=\n ");  
    	scanf("%f%f%f", &a, &b, &c);  
  //formula for quadratic Equation:: ax*2 + bx + c= 0
    	if (a == 0) {
	      	printf("'A' Cannot be zero! It Will  Form Linear Equation \n 'For Quadratic Equation 'a' Must Be > 0'\n");  
       		printf("Please Enter > 0 Number for a\n");
       	}
       	else
       		discriment = (b * b) - (4 * a * c);
       	 {
       			root_part = sqrt(discriment);
	       		denominator = 2 * a;  					    
			root1 = ( - b + root_part) / denominator;  
       	 		root2 = ( - b - root_part) / denominator;
        	
        		printf("Root1 = %f\nRoot2 = %f\n\n", root1, root2);
       		}
       		if (discriment < 0) {
       			printf("TWO Imaginary SOLUTIONS !\n");
       		}
       		else if(discriment==0){
       			printf("ONE  REAL SOLUTION:\n");
			   }
			   else 
			  {
				   	printf("TWO REAL SOLUTION:");
			   	
			   }
        }
