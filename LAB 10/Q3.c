#include<stdio.h>
#include<math.h>
#include<conio.h>

	struct phone_details
	{
	int area;
	int exchange;
	int number;
	
	};

int main ()
	{
	struct phone_details yours;			// LOCAL STRUCTURE DECLARATION
	struct phone_details mine	={212,767,1212};			// STRUCTURE DECLARATION 
	
	printf(" ENTER AREA CODE:\n");
	scanf("%d",&yours.area);
	printf("ENTER EXCHANGE CODE:\n");			// entering area code exchange code and number
	scanf("%d",&yours.exchange);
	printf("ENTER YOUR NUMBER:\n");
	scanf("%d",&yours.number);
	
	printf("MY NUMBER IS\t(%d) %d - %d\n",mine.area,mine.exchange,mine.number);
	
	printf("YOUR NUMBER IS\t(%d) %d - %d",yours.area,yours.exchange,yours.number);


}


