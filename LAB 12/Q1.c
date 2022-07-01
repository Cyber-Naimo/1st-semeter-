#include<stdio.h>
#include<conio.h>
int main()
{
    const int a =10;		// INITILIZING A TO A CONSTANT INTEGER 
    int *ptr=0;				// POINTER VARIABLE
    ptr=&a;					// STORING ADRESS
    *ptr=15;				// CHANGING THE VALUE OF INTEGER WITH THE HELP OF  POINTERS
    printf("%d",a);			// PRINTING THE VALUE
	getch ();
}

