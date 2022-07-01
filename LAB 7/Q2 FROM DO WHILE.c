#include<stdio.h>

int main()

{
	int count=1;
	int i;
	int number1,number2;
	printf("ENETR 1ST NUMBER:\n");
	scanf("%d",&number1);

	printf("ENETR 2ND NUMBER:\n");
	scanf("%d",&number2);
	i = number1;
	do
{
	number1=number1 + i;
	count++;
}
while(count < number2);
printf("THE MULTIPLE IS %d:",number1);
}
