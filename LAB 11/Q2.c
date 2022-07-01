#include<stdio.h>
#include<math.h>
#include<conio.h>
int SumofArray(int size,int *arr);			//FUNCTION PROTOTYPE
int main ()
{
	int i,k,size;
	printf("ENTER THE SIZE OF ARRAY:\n");
	scanf("%d",&size);
	int arr[size];
	
	printf("ENTER ARRAY ELEMENTS:\n");
		
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	k=SumofArray(size,arr);		// CALLING FUNCTION 
	printf("\nTHE SUM IS %d:",k);		// returning sum
	getch ();

}
int SumofArray(int size,int *arr)		// FUNCTION DECLARATION	
{
	int *ptr,i,sum=0;
	ptr=arr;
	for(i=0;i<size;i++)
	{
		sum=sum+ *ptr;			// SUM OF ARRAY ELEMENTS CONDITION
		*ptr++;			 
	}
	return sum;		// RETURNING SUM OF ARRAY VALUE
}


