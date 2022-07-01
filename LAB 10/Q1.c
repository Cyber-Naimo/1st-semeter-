#include<stdio.h>
#include<math.h>
#include<conio.h>

int pal(int,int );		//FUNCTION DECLARATION

int  pal(int num,int result)	//	FUNCTION DEFINATION
{
	
	
	if(num==0)			// base condition for recursion of palindrome
	{
		return result;
	}
	else
	{
		result=num%10+result*10;		// CONDITION FOR RECURSION IT TAKES 1ST VALUE AND THEN ADD RESLUT TOIT FIRST RESULT IS 0
		return pal(num/10,result);		// CALLING AGAIN FUNCTION
		
	}
}
int main()
	
{
		int result;
		int num; 
		printf("ENTER A NO:\n");		// any number
		scanf("%d",&num);
		result=pal(num,0);		//result is iniatially zero;
		
		if(result==num)		// CONDITION WHEN REVERSE NUMBER IS EQUAL TO ACTUAL NUMBER THEN  IT IS PALINDROME ELSE T IS NOT PALINDROME
		{
			printf("THE NO IS %d IS PALINDROME:\n",num);
	
		}
		else
		{
			printf("THE NO %d  IS NOT PALINDROME:\n",num);
		}

}


