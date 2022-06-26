#include <stdio.h>
#include <math.h>
#include <conio.h>
int main()

 {
  	
  	int term1, term2, nextTerm;
	int MSD,LSD,PN,third_prime;
  	int number,lengthof_sequence;
  	
  	// MSD = MOST SIGNIFIFICANT DIGIT//
  	printf("============================================================================================================\n");
  	printf("ENTER MOST SIGNIFICANT DIGIT  OF YOUR BIRTHDAY: \n ");
  	scanf("%d", &MSD);
  	
  	// LSD = LEASTSIGNIFIFICANT DIGIT//
  	printf("============================================================================================================\n");
  	printf("ENTER LEAST  SIGNIFICANT DIGIT  OF YOUR STUDENT ID: \n ");
  	scanf("%d", &LSD);
  	// prime no = 2,3,5,...
  	third_prime= 5;
  	number = pow(2,third_prime);
  	// given condition
  	lengthof_sequence = MSD + LSD + number;
  	
	printf("============================================================================================================\n");
	printf("\n THE LENGTH OF THE SEQUENCE:\n");
	printf("%d\n",lengthof_sequence);
  	// displaying  the first two terms which is always 0 and 1
  	
  	printf("============================================================================================================\n");
  	printf("FIBONICCA SERIES IS :\n +%d, +%d, ", term1, term2);
    
	
	//using do while loop for better work and understanding
	
	
		int i=1;
  		do
 		 {
  			//Method//
  			
  	
  				nextTerm = term1 + term2;
    			term1 = term2;
    			term2 = nextTerm;
    			printf(" +%d,",nextTerm);
    			i++;	
 		 } while (i<=lengthof_sequence-2);
		  	
	getch ();
 }

