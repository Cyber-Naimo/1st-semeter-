#include<stdio.h>
#include<math.h>
#include<conio.h>

int lcm(int,int);			// function declaration


int lcm(int a,int b)		//function definataion
{
	static int m=0;
	m=m+a;			// initially m = 0 to into number1;
	if(m%a==0 && m%b==0)		// if both number are divided by their multiplier then it return m;
	{
		return m;
	}
	else
	{
		return (lcm(a,b));		//calling again function
	}
}
int main ()				//MAIN FUNCTION
{
	int num1,num2,k;
	printf("ENTER TWO NUMBERS:\n");
	scanf("%d%d",&num1,&num2);
	k=lcm(num1,num2);			// CALLING THE FUNCTION
	printf("THE LCM OF TWO NUMBER IS %d",k);
}



