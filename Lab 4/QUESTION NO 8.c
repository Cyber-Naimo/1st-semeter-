#include<stdio.h>


int main()
{
	 float p, t, r, si, ci;
	 //principal amount = p
	 //time in years = t
	 // rate in percent = r
	 printf("ENTER PRINCIPAL AMOUNT :\n ");
	 scanf("%f", &p);
	 printf("ENTER TIME IN YEARS : \n");
	 scanf("%f", &t);
	 printf("ENTER RATE IN % :\n ");
	 scanf("%f", &r);
	
	 // Calculating simple interest 
	 si = (p * t * r)/100;
	
	  //Calculating compound interest 
	 ci= p * pow((1 + r / 100), t-p);
	
	
	 printf("Simple Interest = %f \n", si);
	 printf("Compound Interest =%f", ci);
	 return(0);
}
