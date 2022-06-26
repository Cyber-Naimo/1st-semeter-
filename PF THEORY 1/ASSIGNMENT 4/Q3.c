#include<stdio.h>
#include<math.h>
#include<conio.h>
int fabon(int);				//function declaration or prototype
int main()
{
	int k,num,i=0;
		
	printf("ENTER  NO OF TERMS OF FABONICCI SERIES:\n");		
	scanf("%d",&num);
	if(num<0)
	{
		printf("ENTER POSITIVE INTEGER:\n");
		
	}
	printf("THE %d TERM ARE SHOWN BELOW:\n",num);
	
	do{								// CONDITION FOR PRINTING THE FABONICCI SERIES TO N TERMS USING DO WHILE

	k=fabon(i);
	
	printf("+%d,",k);
		i++;			//	INCREAMENTING THE SERIES
		
}while(i<num);			// CONDITION FOR WHILE
	
	
	getch();
	
}
int fabon(int s)			// function defination
{
	int num;
	static firstterm=0,secondterm=1;		// THE FIRST TWO TERM ARE 0 AND 1 SO INITIALIZING IT 
	static nextterm;
	nextterm=firstterm+secondterm;			// NEXT TERM IS EQUAL TO SUM OF TWO PREVIUS TERMS

	if(s==0)				// base condition for  recursioon
	{
		return (s);
	}
	else if(s==1)				// base condition for  recursioon
	{
		return (s);
	}
	
	num = fabon(s-1)+fabon(s-2);			// CONDTION FOR RECURSION LIKE 0,1= 0+1==1;
	return (num);							// RETURNIN VALUE BACK TO MAIN 

}






