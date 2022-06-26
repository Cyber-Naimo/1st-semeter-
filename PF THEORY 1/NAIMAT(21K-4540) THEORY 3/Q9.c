#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j;
	int number;
	char character ='a';
	
	
	printf("=============================================================================================\n");
	printf("******************************* ENTER THE NUMBER BETWEEN 1 TO 26:****************************\n");
	printf("============================================================================================\n");
	printf(">>>>>>>> ");
	scanf("%d",&number);
	
	if ( number > 0 && number < 27 )
	{
	
	//outer loop  
	for(i=1; i<=number ;i++)
	{
		// inner loop 
		for(j=1;j<=i;j++)
		{
			printf(" %c", character);
			character++;
		}
		
		character = 'a';
		
		printf("\n");
	}
	}
	else 
	{
		printf("ERROR!\nENTER NUMBER BETWEEN 1 TO 26!,PLEASE TRY AGAIN");
	}
	getch ();
	return 0;
}
