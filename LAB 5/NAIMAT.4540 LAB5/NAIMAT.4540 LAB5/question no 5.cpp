#include <stdio.h>
int main()
 {
 char c;
 
  printf("Enter any key");
    scanf(" %c",&c);

    if ( c>='a' && c<='z')
    	printf("its is an small alphabet ");
	
		else if ( c>='A' && c<='Z')
		printf( "its capital alphabet ");
		
		else if (c>='0' && c<='9')
		printf( "This is a DIGIT ");
	
	else
		printf( " specia key KEY");
		
	
	}
	
