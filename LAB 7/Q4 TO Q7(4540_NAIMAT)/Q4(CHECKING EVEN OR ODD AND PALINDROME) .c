#include<stdio.h>

int main()

{	int temp,rem;
	int	reverse=0;
	int i=2;
	int prime = 1;
	int num,sum;
	int v,w,x,y,z;
	
	int n=0;
	
	printf("ENTER A FIVE DIGIT NO ");
	scanf("%d",&num);
	if (num<9999 && num>100000)
	{
		printf("ENTER VALID INTEGER PLEASE TRY AGAIN");
		return 0;
	}
	else 
	v = (num/10000);
	w = (num /1000) %10;
	x = (num /100) %10;
	y= (num /10) %10;
	z = (num  %10);
	sum = v+w+x+y+z;
	printf("THE SUM IS %d\n ",sum);
	
	if (sum %2== 0){
	
	
	for(  i=2;i<n;i++)
	{
		if (n%i==0)
		{
			prime = 0;
			break;
		    }
	    }
		if (num!=0){
			printf("IT IS NOT A PRIME NO\n ");
		}
		else{
		
		printf("IT IS A PRIME NO\n");
	}
	}
	else{
	
	temp=num;
	while(temp!=0)
    {
        rem = temp%10;
        reverse = (reverse*10)+rem;
        temp = temp/10;
    
    }
     if(reverse==num)
	{
		printf("IT IS A PALINDROME");
	 } 
	 else
	 printf("IT IS NOT A PALINDROME");
	}}
	
