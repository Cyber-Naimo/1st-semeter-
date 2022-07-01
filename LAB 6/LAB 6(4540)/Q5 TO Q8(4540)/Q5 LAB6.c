#include<stdio.h>
int main(){
	float value;
	printf("************* ENTER RITCHER SCALE NUMBER! ************ \n ");
	scanf(" %f",& value);
	
	if(value < 5.0)
	{
	
	printf("*********** LITTLE OR NO DAMAGE OCCUR! *********** ");
	}
	else if( value>= 5.0 && value < 5.5)
	 {
		
		printf("*********** SOME DAMAGE OCCUR! *************");
	}
			else if(value >= 5.5 && value < 6.5)
		{
			
	printf("********* SERIUS DAMAGE! WALLS MAY  CRACK!************");
		}
	else if(value >= 6.5 && value < 7.5)
	{
	
	printf("************ DISASTER! HOUSE AND BUILDINGS MAY COLLAPSE! ***********");
	}
	else
	{
	
	printf("************* CATASTROPHE! MOST BUILDING DESTROYED! *******");
	}
	return 0;
}
// WE CANNOT HANDLE THIS QUETSION WITH SWITCH CASE BECUASE THE RANGES ARE NOT DEFINED HERE OR IT CAN'T BE DONE WITH SWITCH CASE IT CAN EASILY DONE BY 
// USING IF ELSE STATEMENT SO INSTEAD OF USING SWITCH WE HAVE TO USE IF ELSE IN SWITCH CASE WE COMPARE WITH A FIXED VALUE BUT HERE THE VALUE IS NOT FIXED IT CHANGES 
// WE CANNOT COMARE THE VALUE.
