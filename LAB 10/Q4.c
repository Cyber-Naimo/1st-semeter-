#include<stdio.h>
#include<math.h>
#include<conio.h>
struct record_student			// STRUCTURE SECLARATION
	{
		int std_id;
		int std_age;
		char std_name[20];
		int std_street;
		char std_state[20];
		char std_city[20];
		char std_country[20];
	};
	struct record_student r[10];		// DECLARATION STRUCTURE ARRAY:
	int rec,i;		
	int main ()				// MAIN FUNCTION
	{
	printf("ENTER HOW MANY RECORD YOU WANT TO ENTER :\n");
	scanf("%d",&rec);
	for(i=0;i<rec;i++)			 // STORING THE RECORD OF N NUMBER OF STUDENTS:
	{
	
	printf("ENTER YOUR ID:\n");
	scanf("%d",&r[i].std_id);
	printf("ENTER YOUR AGE:\n");
	scanf("%d",&r[i].std_age);
	printf("ENTER YOUR NAME:\n");
	fflush(stdin);
	gets(r[i].std_name);
	printf("ENTER YOUR STATE NAME:\n");
	fflush(stdin);
	gets(r[i].std_state);
	printf("ENTER YOUR CITY NAME:\n");
	fflush(stdin);
	gets(r[i].std_city);
	printf("ENTER YOUR COUNTRY NAME:\n");
	fflush(stdin);
	gets(r[i].std_country);
	printf("ENTER YOUR STREET NUMBER:\n");
	scanf("%d",&r[i].std_street);

	}
	for(i=0;i<rec;i++)			//PRINTING THE N NUMBER OF RECORDS:
	{
		printf("STUDENT ID=%d\nSTUDENT AGE=%d\nSTUDENT NAME=%s\nSTUDENT STATE NAME=%s\nSTUDENT CITY NAME=%s\nSTUDENT COUNTRY NAME=%s\nSTUDENT STREET NUMBER=%d\n\n\n",
		r[i].std_id,r[i].std_age,r[i].std_name,r[i].std_state,r[i].std_city,r[i].std_country,r[i].std_street);
		getch ();
	}
}


