#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int main()
{
	int i,size,*ptr;
	static int sum=0;
	printf("ENTER SIZE ");
	scanf("%d",&size);
	ptr=(int*)malloc(size*sizeof(int));
	printf("ENTER ARRAY ELEMENTS:\n");
	for(i=0;i<size;i++)
	{
		scanf("%d",(ptr+i));
	}
	printf("ENTERED ARRAY IS:\n");
	printf("{");
	for(i=0;i<size;i++)
	{
		printf("%d ",*(ptr+i));
	}
	printf("}");
	for(i=0;i<size;i++)
	{
		sum+=*(ptr+i);
	}
	printf("\nSUM OF ARRAY ELEMENTS ARE = %d",sum);
	free(ptr);
	getch ();
}
