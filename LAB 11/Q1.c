#include<stdio.h>
#include<math.h>
#include<conio.h>
void swapped(int *a,int *b,int *c); 	//FUNCTION PROTOTYPE
int main ()
{

	int a,b,c;
	printf("ENTER THREE NO:\n");
	scanf("%d%d%d",&a,&b,&c);			// getting numbers
	printf("THE VALUE BEFORE SWAPPPING=\n");
	printf("\nA= %d\tB=%d\tC=%d",a,b,c);
	printf("\n\nTHE VALUES AFTER SWAPPING ARE=\n");
	swapped(&a,&b,&c);			// CALLING FUNCTION OR TAKING ADREES OF POINTERS VARIABLE
	printf("\nA= %d\tB=%d\tC=%d",a,b,c);

}

void swapped(int *a,int *b,int *c)		// FUNCTION DECLARATION	
{
	int temp;
	
	temp =*c;
	*c=*a;					// swaapping condition    
	*a=*b;
	*b =temp;
	
	
}

