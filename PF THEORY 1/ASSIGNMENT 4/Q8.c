#include<stdio.h>
#include<math.h>
#include<conio.h>
int main ()
{
	struct date{		// THE STRUCTURE OF DATE 
	int day;
	int year;
	int month;
};
	struct date d1,d2;		// LOCAL VARIABLE OF STRUCTUE
	printf("ENTER DAY,YEAR AND MONTH RESPECTIVELY:\n");			// DATE FORMAT = DAY/YEAR/MONTH;
	
	printf("ENTER 1ST DATE\n");
	scanf("%d%d%d",&d1.day,&d1.year,&d1.month);
	
	printf("\n\nENTER 2ND DATE\n");
	scanf("%d%d%d",&d2.day,&d2.year,&d2.month);
	
	if(d1.day==d2.day && d1.year== d2.year && d1.month==d2.month)		// CONDITION FOR EQUALS DATE
	{
		printf("THE DATES ARE EQUAL:\n");
	}
	else
	{
		printf("THE DATES ARE  NOT EQUAL:\n");
	}
	getch ();
}

