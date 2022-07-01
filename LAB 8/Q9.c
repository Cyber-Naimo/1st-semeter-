#include<stdio.h>
#include<math.h>
#include<conio.h>
int main ()
{
	int size,i,pos;


	printf("ENTER SIZE OF AN ARRAY:\n");
	scanf("%d",&size);
	//INITILIZNG SIZE
	int elements[size];
	printf("ENTER ELEMENTS IN ARRAY:\n");
	for(i=0;i<size;i++)
	{
	// INSERTING ARRAY ELEMENTS
		scanf("%d",&elements[i]);

	}
	// ENETRING POSITION:
		printf("ENTER THE POSITION YOU WANT TO DELETE AN ARRAY:\n");
		scanf("%d",&pos);

		for(i=pos-1; i<size; i++)

		elements[i] = elements[i+1];
		// NEW ARRAY AFTER ADDING 
			printf("THE ELEMENTS AFTER DELETING ARE\n");
			for(i=0;i<size-1;i++)
			{
				printf("%d\t",elements[i]);
			}



}


