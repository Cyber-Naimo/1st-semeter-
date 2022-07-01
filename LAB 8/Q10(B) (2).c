#include<stdio.h>
#include<math.h>
#include<conio.h>
int main ()
{

//*********
//**** ****
//***   ***
//**     **
//*       *
//**     **
//***   ***
//**** ****
//*********
int i,j,k=0,n,rows;
printf("ENTER NO OF ROWS:\n");
scanf("%d",&rows);
for(i=1;i<=rows;i++)
{
	n = (rows+1)/2;
	i<=n ? k++ : k--;
	for(j=1;j<=rows;j++)
	{
		if(j<= n+1-k || j>= n-1+k)
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


