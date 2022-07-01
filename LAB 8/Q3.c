#include<stdio.h>
int main()
{
	int i,j,k=1;
	float A[6];
	
//	printf("ENTER SIZE OF AN ARRAY:\n");
//	scanf("%d",&size);
//	
	for (i=0;i<6;i++)
	{
	
	printf("ENTER THE ELEMENT %d\n",k++);
	scanf("%f",&A[i]);
	}
	
	for(i=5;i>=0;i--)
	{
	
	printf("ELEMENTS IS DESSCENDING ORDER IS %f\n",A[i]);
}
}

