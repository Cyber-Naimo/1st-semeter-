//// A program to convert Roman Numerals to Decimals system.//

#include<stdio.h>
int main()	
{
 int numeral, first_numeral,second_numeral;
 int  I = 1,V = 5,X = 10,L = 50,C = 100,D = 500,M = 1000;
 int Dec_Equivalant;
 char first_character,second_character;
 
 printf("**********HOW MANY CHARACTERS DOES YOUR NUMERAL HAVE 1 or 2 ?*********\n");
 scanf("%d",&numeral);

 if (numeral==1)
 {
 	printf("***** ENTER THE CHARACTERS!*****\n");
 	scanf(" %c",&first_character);

 	switch(first_character)
 	{
 		
 	case'I':
 		first_numeral=I;
 		break;
 	case'V':
 		first_numeral=V;																	
 		break;
 	case'X':
 		
 		first_numeral=X;
 		break;
 	case'L':
 		first_numeral=L;
 		break;
 	case'C':
 		first_numeral=C;
 		break;
 	case'D':
 		first_numeral=D;
 		break;
 	case'M':
 		first_numeral=M;
	    break; 
	}
	printf("********DECIMAL EQUAVALENT IS %d*******  ",first_numeral);

 }
 else if(numeral==2){
	printf("******* ENTER FIRST ROMAN CHARACTER ******* ");
 	scanf(" %c",&first_character);
 	
 	switch(first_character)
 	{
 		
 	case'I':
 		first_numeral=I;
 		break;
 	case'V':
 		first_numeral=V;
 		break;
 	case'X':
 		first_numeral=X;
 		break;
 	case'L':
 		first_numeral=L;
 		break;
 	case'C':
 		first_numeral=C;
 		break;
 	case'D':
 		first_numeral=D;
 		break;
 	case'M':
 		first_numeral=M;
	    break; 
	}
 	printf("********* ENTER SECOND CHARACTER! *********\n ");
 	scanf(" %c",&second_character);
 	
 	switch(second_character)
 	{
 		
 	case'I':
 		second_numeral=I;
 		break;
 	case'V':
 		second_numeral=V;
 		break;
 	case'X':
 		second_numeral=X;
 		break;
 	case'L':
 		second_numeral=L;
 		break;
 	case'C':
 		second_numeral=C;
 		break;
 	case'D':
 		second_numeral=D;
 		break;
 	case'M':
 		second_numeral=M;
	    break; 
	}
	Dec_Equivalant=second_numeral-first_numeral;
 	printf("******** THE DECIMAL EQUAVALENT OF THE TWO CHARACTER IS EQUAL TO = %d *********",Dec_Equivalant);
 }
 else
 {
 	printf(" **************ENTER CORRECT NUMERAL!\n ENTER 1 OR 2! *************");
 }
}
