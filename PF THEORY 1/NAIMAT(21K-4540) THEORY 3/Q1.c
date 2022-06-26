#include<stdio.h>
#include<conio.h>
int main()
{
	int  DOB;
	int  octaldecimal=0;
	int  reminder;
	int  x=1;
	
     printf("--------------------------------------------------------------------------------------------------------------------\n");
     printf("\n ************************ CONVERTION  OF DECIMAL NUMBER INTO OCTAL NUMBER **************************************\n ");
     printf("-------------------------------------------------------------------------------------------------------------------\n");

     printf("========= ENTER YOUR  DATE OF BIRTH =========\n "); //  ENTER DATE OF BIRTH
     scanf("%d",&DOB);
     
	 // DOB = DATE OF BIRTH
		do
			{
				// first get reminder
		    reminder = DOB%8;																		// it can also be find  by using format specifier of 
		    																						// %o mean ( %d into %o).
			// then divide the number by 8 and then add into reminder						
			DOB = DOB/8;
			octaldecimal = octaldecimal + reminder*x;
			x = x*10;
			} while(DOB!=0);
			
		printf("\n");
		printf("\n THE OCTAL EQUAVALENT OF YOUR  DATE OF BIRTH IS \n \t \t [%d]",octaldecimal); // FINAL ANSWER
		getch ();

		return 0;
	
}
