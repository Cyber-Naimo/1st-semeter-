#include<stdio.h>
#include<math.h>
#include<conio.h>
#define SIZE 5



struct Register
{
	int course_id;
	char course_name[20];
};
struct Register r;

struct Student
{
	int student_id;
	char first_name[20];
	char last_name[30];
	int cell_no;
	char email[50];
	struct Register r;
};
struct Student std[SIZE];

int i;

int main()
{
	for(i=0;i<SIZE;i++)
	{
	
	printf("\nENTER  FIRST NAME OF STUDENT:");
	scanf("%s",&std[i].first_name);
	printf("ENTER  LAST NAME OF STUDENT:");
	scanf("%s",&std[i].last_name);
	printf("ENTER  STUDENT ID:");
	scanf("%d",&std[i].student_id);
	printf("ENTER  CELL PHONE NUMBER OF STUDENT:");
	scanf("%s",&std[i].cell_no);
	printf("ENTER EMAIL OF STUDENT:");
	scanf("%s",&std[i].email);	
	printf("ENTER  COURSE ID:");
	scanf("%d",&std[i].r.course_id);
	printf("ENTER COURSE NAME:");
	fflush(stdin);
	gets(std[i].r.course_name);
	}
	for(i=0;i<SIZE;i++)
	{
		printf("\nFIRST NAME OF STUDENT=%s",std[i].first_name);
		printf("\nLAST NAME OF STUDENT=%s",std[i].last_name);
		printf("\nSTUDENT ID=%d",std[i].student_id);
		printf("\nCELL PHONE NUMBER OF STUDENT=%d",std[i].cell_no);
		printf("\nEMAIL OF STUDENT=%s",std[i].email);	
		printf("\nCOURSE ID=%d",std[i].r.course_id);
		printf("\nCOURSE NAME=%s",std[i].r.course_name);
	}
	getch ();
}
	
