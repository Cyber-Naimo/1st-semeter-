#include<stdio.h>
#include<math.h>
#include<conio.h>
int main ()
{
int size,i,num,pos;

	//INITILIZNG SIZE
printf("ENTER SIZE OF AN ARRAY:\n");
scanf("%d",&size);

int elements[size];
printf("ENTER ELEMENTS IN ARRAY:\n");
for(i=0;i<size;i++)
{
// INSERTING ARRAY ELEMENTS
scanf("%d",&elements[i]);

}
	// ENETRING POSITION:
printf("ENTER THE POSITION YOU WANT TO INSERT AN ARRAY:\n");
scanf("%d",&pos);

	// ENETERING NO
printf("ENTER THE NEW NUMBER YOU WANT TO INSERTED ON POSITION %d:\n",pos);
scanf("%d",&num);

for(i=size;i>=pos;i--)

	elements[i] = elements[i-1];
	elements[pos]=num;

for(i=0;i<=size;i++)

	printf("%d\t",elements[i]);




}


