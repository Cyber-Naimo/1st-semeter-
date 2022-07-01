#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int main()
{
	
	int A,i,*ptr;
	int neg=0,pos=0,zero=0,sum=0;
	printf("NUMBER OF ELEMENTS");
	scanf("%d",&A);
	ptr=(int *)malloc(A*sizeof(int));
	printf("Enter %d Elements In Erray: ",A);
	for(i=0;i<A;i++)
	{
		scanf("%d",ptr+i);
	}
	for(i=0;i<A;i++)
	{
		if(*(ptr+i)>=1)
		{
			pos++;
		}
		else if(*(ptr+i)<=-1 )
		{
			neg++;
		}
		else
		{
			zero++;
		}
	}
	for(i=0;i<A;i++)
	{
		sum=sum+*(ptr+i);
	}
	printf("Negative Numbers Are: %d\n",neg);
	printf("Positive Numbers Are: %d\n",pos);
	printf("Zeros Are: %d\n",zero);
	printf("Sum is %d",sum);
	free(ptr);
	getch ();
}
