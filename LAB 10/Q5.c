#include <stdio.h>
#include <conio.h>
struct complex
{
   double real,imag;
};
	struct complex x,y,z;
	
   struct complex read(void);										// FUNCTION READING
   void write(struct complex);										// FUNCTION DECLARATION FOR WRITING
   struct complex addition(struct complex, struct complex);   		// FUNCTION DECLAARATION FOR ADDITION
   struct complex multiplication(struct complex, struct complex);	// FUNCTION DECLARATION FOR MULTIPLICATION
   
	int main ()
{	
   
   printf("ENTER 1ST COMPLEX NUMBER:\n");
   x = read();									// CALLING READING FUNCTION
   write(x);									// CALLING WRITING FUNCTNIO
   	
   printf("ENTER THE 2ND COMPLEX NUMBER:\n");
   y = read();									// CALLING READING FUNCTION
   write(y);									// CALLING WRITING FUNCTNIO
   
   printf("\n\nADDITION OF TWO COMPLEX NUMBERS:\n");
   z = addition(x, y);							// CALLING READING FUNCTION
   write(z);									// CALLING WRITING FUNCTNIO
  
   printf("\n\nMULTIPLICATION OF TWO COMPLEX NUMBERS\n");
   z = multiplication(x, y);					// CALLING READING FUNCTION
   write(z);									// CALLING WRITING FUNCTNIO
   
   getch();
}
struct complex read(void)			//FUNCTION DEFINATION FOR READING
{
   struct complex num;
   printf("\n\nENTER THE REAL NUMBER:\n");
   scanf("%lf", &num.real);
   printf("\nENTER THE IMAGINARY NUMBER:\n");
   scanf("%lf", &num.imag);
   return num;
}
void write(struct complex x)					//FUNCTION DEFINATION FOR WRITING
{
   
   printf("(%.1lf + %.1lf i)", x.real, x.imag);
   printf("\n");
}
struct complex addition(struct complex a, struct complex b)			//FUNCTION DEFINATION FOR ADDITION
{
   struct complex num;
   num.real = (a.real + b.real);			// METHOD TO ADD TWO COMPLEX NUMBERS
   num.imag = (a.imag + b.imag);
   return num;
}

struct complex multiplication(struct complex a, struct complex b)		//FUNCTION DEFINATION FOR MULTIPLICATION
{
   struct complex num;
   num.real=(a.real * b.real) - (a.imag * b.imag);
   num.imag=(a.real * b.imag) + (a.imag * b.real);				// METHOD TO MULTIPLY TWO COMPLEX NUMBERS
   return num;
}

