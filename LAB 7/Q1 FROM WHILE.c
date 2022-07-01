#include<stdio.h>

int main()

{
int number;
int i=0;
printf("ENTER NO \n");
scanf("%d",&number);

while(number!=0)
{
	printf(" %d\t ",i);
	i = number/10;
	i++;
	

}

return 0;

}
