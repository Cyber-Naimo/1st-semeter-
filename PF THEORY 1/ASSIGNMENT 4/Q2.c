#include<stdio.h>
#include<math.h>
#include<conio.h>
int sum(int); 		// declaration or prototype
int main ()
{
int k,num,i;
	
	printf("ENTER A 5 DIGIT NO:\n");
	scanf("%d",&num);
	if(num>9999 && num<100000 ){		// condition for 5 digit no
	
	
	k = sum(num);				// CALLING THE FUNCTION IN MAIN AND RETURNING THE VALUE IN MAIN;
	printf("THE SUM OF 5 DIGIT NO IS %d",k);
	getch ();
}
else
{
	printf("ENTER FIVE DIGIT NUMBER:\n");
}
	
}
int sum(int s)			// function defination
{
	int num;
	if(s==0)			// base condition for  recursioon
	{
		return (s);
	}
	num = s%10+sum(s/10);		// CONDTION FOR RECURSION 124  NUM%10 = 4 AND + NUM/10 = 12 AND SO ON;
	return (num);				// RETURNIN VALUE BACK TO MAIN 
}


