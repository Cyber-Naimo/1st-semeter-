#include<stdio.h>
#include<math.h>


void sort(void);		// FUNCTION PROTOTYPE:


struct record		// STRUCTURE  ARRAY PRORAM FOR STUDENTS RECORDS
	{
		int roll;
		float marks;
		char name[100];
	};
	struct record r[7];
	struct record ascend;
	int i,rec,choice;


	int main ()
	{

	printf("HOW MANY RECORDS DO YOU WANT TO ENTER:\n");		// n records
	scanf("%d",&rec);
	
	for(i=0;i<rec;i++)
	{
		printf("ENTER THE ROLL NO :\n");
		scanf("%d",&r[i].roll);
		printf("ENTER THE NAME OF STUDENT:\n");			// ROLL NO:?|| STUDENT NAME:?|| MARKS:?
		scanf("%s",&r[i].name);
		printf("ENTER THE MARKS:\n");
		scanf("%f",&r[i].marks);
	}
	
	do{
	
	printf("WHAT YOU WANT TO DO:\n");
	printf("ENTER 1 FOR SORTING DATA ACCORDING TO MARKS:\n");
	printf("ENTER 2 FOR SEARCH AND PRINT THE DATA ACCORDING TO ROLL NO:\n ");
	printf("ENTER 3 FOR SEARCH AND PRINT THE DATA ACCORDING TO THE NAME:\n");
	printf("ENTER 4 FOR END:\n");
	scanf("%d",&choice);
	
	
	switch (choice)				// CASES FOR GIVEN THREE FUNCTIONS
	{
		case 1:
			{
								
					sortt(r,rec);		//CALLING SORT FUNCTION ACCORDING TO MARKS OBTAINED;
					break;
			}
		case 2:
			{
				roll(r,rec);			//CALLING SEARCH FUNCTION ACCORDING TO ROLL NO;
				break;
			}
		case 3:
			{
				name(r,rec);			//CALLING SEARCH FUNCTION ACCORDING TO  NAME;
				break;
			}
	}

}while(choice!=4);
}

void sortt(struct record r[],int rec)			// FUNCTION DEFINATION OF SORT FUNCTION
{
	int i,j;
	
		for(i=0;i<rec;i++)
		{
			for(j=i+1;j<rec;j++)
			{
				if(r[i].marks>r[j].marks)		// SORTING IS DONE IN ASCENDING ORDER
				{
					ascend=r[i];
					r[i] = r[j];
					r[j] = ascend; 			// SWAPPING ARRAY ELEMENTS
				}
			}
		}
		printf("THE SORT RECORD IS GIVEN BELOW\n\n");
		for(i=0;i<rec;i++)			/// PRINTING RECORD
		{
			printf("\n\nROLL NO:%d || NAME:%s || MARKS :%f\n",r[i].roll,r[i].name,r[i].marks);
		}
}

void roll(struct record r[],int rec)		// FUNCTION DEFINATION FOR SEARCHING ACCORDING TO ROLL NO FUNCTION
{
					
					int search,m;
					printf("ENTER THE STUDENTS ROLL NO:\n");
					scanf("%d",&search);
					for(m=0;m<rec;m++)
					{
						if(r[m].roll==search)		// SEARCH CONDITION 
						{
							printf("ROLL NO: %d|| NAME: %s|| MARLS:%f",r[m].roll,r[m].name,r[m].marks);
							break;
						}
					}
}	
	
void name(struct record r[],int rec)	// FUNCTION DEFINATION FOR SEARCHING ACCORDING TO NAME OF STUDENTS FUNCTION
{
		char k[20];
		int o;
				printf("ENTER THE STUDENT NAME :\n");
				scanf("%s",k);
				for(o=0;o<rec;o++)
				{
					if(strcmp(r[o].name,k)==0)		// SEARCH CONDITION USING STRING COMPARE 
					{
							printf("ROLL NO: %d|| NAME: %s|| MARLS:%f",r[o].roll,r[o].name,r[o].marks);
						break;
					}
					
				}
}
