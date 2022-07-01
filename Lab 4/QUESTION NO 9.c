#include<stdio.h>
int main(){
	int num,seclast,sum,firstdigit;
	
	printf("ENTER A 5 DIGIT NO :\n");
	scanf("%d",&num);

	seclast=(num/10)%10;
	while(num>=10)
	{
	num=num/10;
	}
	firstdigit=num;
		sum= num+seclast;
	printf("THE SUM OF FIRST AND SECOND LAST DIGIT IS =%d",sum);
	}
		
