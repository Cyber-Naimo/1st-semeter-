#include<stdio.h>
#include<math.h>
#include<conio.h>
int main ()
{
	int range,num,i;
	printf("ENTER THE TABLE NO:\n");
	scanf("%d",&num);
	printf("ENTER THE RANGE \n");
	scanf("%d",&range);
	
	//CONDITION FOR RANGE
		if(range < 3  || range>10)
		{
			printf("ERROR:\n");
		}
		//PRINTING ODD NO TABLE
		for(i=3;i<=range;i+=2)
		{
			printf("%d * %d = %d\n",num,i,num*i);
		}


}


