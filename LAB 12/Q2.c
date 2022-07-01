#include <stdio.h>
#include <conio.h>
void func();	// function declartion
void func()		// function prototype;
{
	int x;	
	float y;
	char z;
	
	int *ptr;
	float *ptr2;				// initilize an int,float ,char pointer according to question
	char *ptr3;
	ptr=&x;
	ptr2=&y;			// interchange the adress
	ptr3=&z;
	
	printf("ENTER A INT VALUE\nENTER A FLOAT VALUE \nENTER CHAR CHARACTER\n");
	scanf("%d %f %c",ptr,ptr2,ptr3);
	printf("A=%d\tB=%f\tC=%c\n",x,y,z);		// printing the values of int,char,float
	getch ();

}
int main()
{
func();		//calling the function
getch ();
}
