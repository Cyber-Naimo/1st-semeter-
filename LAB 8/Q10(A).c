#include<stdio.h>
#include<math.h>
#include<conio.h>
int main ()
{
int i,j,rows,n,k=0;
printf("ENTER NO OF ROWS:\n");
scanf("%d",&rows);

for(i=1;i<=rows;i++)
{

	for(j=1;j<=rows;j++)
	{
		if(i==1 || i==rows || j == 1|| j==rows)
		{
			printf("*");
		}
		else
		{
			printf(" ");
		}
	}
	printf("\n");
}


}


