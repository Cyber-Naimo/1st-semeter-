#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int main()
{

	int *a;
	char *b;
	float *c;
	a=(int*)malloc(sizeof(int));		//create memory for int
	
	b=(char*)malloc(sizeof(char));		//create memory for char
	
	//create memory for float
	c= (char*)malloc(sizeof(char*));
	
	printf("Enter Integer VALUE: ");
	scanf("%d",a);
	printf("Enter Char CHARACTER: ");
	scanf(" %c",b);
	printf("Enter Float VALUE:");
	scanf("%f",c);
	printf("The Value of Integer is %d.\n",*a);
	printf("The Value of Char is %c.\n",*b);
	printf("The Value of Float is %.1f\n",*c);
	free(a);
	free(b);
	free(c);
	getch ();
}
