#include<stdio.h>
#include<math.h>
#include<conio.h>

struct Student
{
	int student_id;
	char first_name[20];
	char last_name[30];
	int cell_no;
	char email[50];
};
struct Student s;

struct Register
{
	int course_id;
	char course_name[20];
};
struct Register r;

int main()
{
	printf("\nENTER  FIRST NAME OF STUDENT:");
	scanf("%s",&s.first_name);
	printf("ENTER  LAST NAME OF STUDENT:");
	scanf("%s",&s.last_name);
	printf("ENTER  STUDENT ID:");
	scanf("%d",&s.student_id);
	printf("ENTER  CELL PHONE NUMBER OF STUDENT:");
	scanf("%s",&d.cell_no);
	printf("ENTER EMAIL OF STUDENT:");
	scanf("%s",&s.email);	
	printf("ENTER  COURSE ID:");
	scanf("%d",&r.course_id);
	printf("ENTER COURSE NAME:");
	fflush(stdin);
	gets(r.course_name);
	printf("\nFIRST NAME OF STUDENT=%s",s.first_name);
	printf("\nLAST NAME OF STUDENT=%s",s.last_name);
	printf("\nSTUDENT ID=%d",s.student_id);
	printf("\nCELL PHONE NUMBER OF STUDENT=%d",s.cell_no);
	printf("\nEMAIL OF STUDENT=%s",s.email);	
	printf("\nCOURSE ID=%d",r.course_id);
	printf("\nCOURSE NAME=%s",r.course_name);
	getch ();
}
