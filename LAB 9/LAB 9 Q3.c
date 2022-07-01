#include<stdio.h>
int main()
{
	char s1 [20];
	char s2 [20];
	
	printf("\nENTER YOUR USER NAME:");
	scanf("\n%s",&s1);
	
	printf("\nENTER LAST NAME:");
	scanf("\n%s",&s2);
	
	strcat(s1,s2); 					// STRING CATINATION FOR JOINING TWO STRINGS(STRCAT)
	printf("JOINT STRING:\n");
	printf("%s\n",s1);
	
	printf("REVERSE STRING:\n");
	printf("%s\n",strrev(s1));		// STRING FOR REVERSING THE CHARACTERS(STRREV) = STRING REVERSE
}
