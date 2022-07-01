#include<stdio.h>
int main()
{
	int i,j,size;
	int marks[size],sum=0;
	float average=0;
	printf("ENTER SIZE OF ARRAY:\n");
	scanf("%d",&size);
//	marks[0] =5;
//	marks[1] =5;
//	marks[2] =5;
//	marks[3] =5;
	for(j=0; j < size ;j++){
		
	
	printf("ENTER THE MARKS OF ARRAY %d:\n",j);
	scanf("%d",&marks[size]);
}
	for(i=0;i<size;i++){
		printf("THE MARKS OF ARRAY ARE %d is %d\n",i,marks[j]);
		sum+=marks[size];
		average = sum/size;
	}
	
	printf("THE SUM IS %d\n",sum); 
	printf("THE AVERAGE IS %f\n",average);
}
