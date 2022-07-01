#include<stdio.h>
int main()
{
	int num, a,x;
	printf("enter numbers:\n");
	scanf("%d",&num);
	a=num%3;
	if (a==0)
	{
		printf(" this is multiple of 3 ");
		
	}
	else 
	printf("this is not multiple of 3");
}
