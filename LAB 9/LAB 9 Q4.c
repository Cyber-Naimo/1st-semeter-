#include<stdio.h>
#include<math.h>
#include<conio.h>
void  position();		// FUNCTION DECLARATION OR PROTOTYPE
int main ()
{
	
	position();		// FUNCTION CALLING
	getch();
}
void position()		//	FUNCTION DEFINATION
{
	int marks;
	float exper;
	printf("ENTER YOUR MARKS\n");
	scanf("%d",&marks);
	printf("ENTER YOUR EXPERIENCE:\n");
	scanf("%f",&exper);
	
	if(marks>=50 && exper == 0)			
	{
		printf("YOU ARE SELECTED FOR TRAINEE ENGINEER:\n");
		
	}
	else if(marks==60 && exper >1)
	{ 
		printf("YOU ARE SELECTED FOR ASSISTANT DEVELOPER:\n");
		
	}
	else if(marks>=70 && exper >=2)
	{
		printf("YOU ARE SELECTED FOR ASSOCIATE DEVELOPER:\n");
	}
	else
	{
		printf("SORRY ! YOU ARE NOT SELECTED");
	}
}

