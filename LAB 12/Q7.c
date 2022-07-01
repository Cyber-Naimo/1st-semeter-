#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int main()
{
	
	int *ptr,i,j,size,a;
	int array[100];
	printf("Enter The Size of MATRIX:");
	scanf("%d",&size);
	ptr=(int*)malloc(size*sizeof(int));
	printf("Enter The Size of ARRAY:");
	scanf("%d",&a);
	printf("Enter Array Elements:");
	for(i=0;i<a;i++)
	{
		scanf("%d",&array[i]);
	}
	printf("\n");
	for(i=0;i<size;i++)
	{
		
		*(ptr+i)=0;
	}
	for(i=0;i<a;i++)
	{
		*(ptr+i)=array[i];
	}
	printf("{");
	for(i=0;i<size;i++)
	{
		printf("%d,",*(ptr+i));
	}
	printf("}");
	getch ();
}
