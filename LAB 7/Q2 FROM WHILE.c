#include<stdio.h>

int main()

{
	int count=1;
	int i;
	int number1,number2;
	printf("ENTER 1ST NUMBER:\n");
	scanf("%d",&number1);

	printf("ENTER 2ND NUMBER:\n");
	scanf("%d",&number2);
	i = number1;
	
	while(count < number2)
{
	number1=number1 + i;
	count++;
}
printf("THE MULTIPLE IS %d:",number1);
}
