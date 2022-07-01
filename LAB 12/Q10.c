#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<conio.h>
struct data
{
	int age;
	char name[100];
	float marks;
}*ptr;
int main()
{

	int size,i,j;
	printf("ENTER NUMBER OF RECORDS YOU WANT TO STORE:");
	scanf("%d",&size);
	ptr=(struct data *)malloc(size * sizeof(struct data));
	j=1;
	for(i=0;i<size;i++)
	{
		printf("ENTER STUDENT NAME:\n");
		fflush(stdin);
		gets((ptr+i)->name);		// we use -> in structure pointer
		printf("ENTER AGE OF STUDENT:");
		scanf("%d",&(ptr+i)->age);
		printf("ENTER MARKS OF STUDENT:");
		scanf("%f",&(ptr+i)->marks);
		j++;
	}
	j=1;
	for(i=0;i<size;i++)
	{
		printf("\nSTUDENT NAME=%s\n",(ptr+i)->name);
		printf("STUDENT AGE=%d\n",(ptr+i)->age);
		printf("STUDENT MARKS= %.2f\n\n",(ptr+i)->marks);
		j++;
	}
	getch ();
}
