#include<stdio.h>
int main()
{
	//p=principal income between 100rs to 1000000rs ,r=rate of interest between 5% to 10% , t= time period between 1 to 10 years
int p,r,t,int_amt;
printf(" principle income, Rate of interest & time period: \n");
scanf("%d%d%d",&p,&r,&t);
int_amt=(p*r*t)/100;
printf("Simple interest = %d",int_amt);
return 0;
}
