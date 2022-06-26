#include<stdio.h>
#include<math.h>
#include<conio.h>
#include<string.h>

int main ()
{
struct library
	{
		int accesion,flag;		// flag for wheater the book is issued or not
		char title_book[20],auther_name[20];
		float price;
	};
	
	struct library l[20];		// initializing the structure
	int choice ,i=0,acc,j=0,x;
	char auther[20];
	char book[20];
	

	
			printf("WELCOME TO LIBRARY MANAGEMENT SYSTEM:\n\n\n");
			
	while(choice!=7)				// condition for breaking the loop 
	{
		printf("ENTER 1 FOR ADD BOOK INFORMATION:\n");
		printf("ENTER 2 FOR DISPLAY BOOK INFORMATION:\n");
		printf("ENTER 3 FOR LIST ALL BOOKS OF GIVEN AUTHER:\n");
		printf("ENTER 4 FOR LIST THE TITLES OF THE SPECIFIED  BOOKS:\n");
		printf("ENTER 5 FOR LIST THE COUNT OF BOOK IN THE LIBRARY:\n");
		printf("ENTER 6 FOR LIST THE BOOKS IN THE ORDER OF ASCESSION:\n");
		printf("ENTER 7 FOR EXIT:\n");
		scanf("%d",&choice);					// USERS CHOICE WHAT HE OR SHE WANTS TO DO IN LIBRARAY SYSTEM
		
		switch(choice)
			{
				case 1:
					{
					
						printf("ENTER THE TITLE OF THE BOOK:\n");
						fflush(stdin);
						gets(l[j].title_book);
						printf("ENTER THE AUTHER NAME OF THE BOOK\n");
						fflush(stdin);
						gets(l[j].auther_name);
						printf("ENTER THE PRICE OF THE BOOK:\n");
						scanf("%f",&l[j].price);
						printf("\n");
						printf("ENTER 1 IF BOOK IS AVAILABLE OR 0 IF IT IS ISSUED:\n");
						scanf("%d",&l[j].flag);
						printf("RECORD ADDED SUCCESFULLY:\n\n---------------------------------------------------\n");
						l[j].accesion = j;
						j++;
						break;
					}
					
				case 2:
					{
						printf("ENTER BOOK NAME:\n");
						fflush(stdin);
						gets(book);
						for(i=0;i<j;i++)
						{
							if(strcmp(l[i].title_book,book)==0)
							{
							
							
							printf("\nBOOK NAME||");
							puts(l[i].title_book);
							
							printf("AUTHER NAME||");				
							puts(l[i].auther_name);
							
							printf("PRICE ||");
							printf("%f",l[i].price);
														
							printf("\nAVALIBILITY||");
							if(l[i].flag == 1)				// CONDITION FOR ISSUED OR AVAILIBILITY
							{
								printf("THE BOOK IS AVAILABLE:\n----------------------------------------------\n");
							}
							else
							{
								printf("THE BOOK IS NOT AVAILABLE:\n--------------------------\n");
							}
							
							}
						}
						break;
					}
				case 3:
					{
						printf("ENTER THE NAME OF THE AUTHER :\n");
						fflush(stdin);
						gets(auther);
						printf("THE BOOK NAME:\n");
						for(i=0;i<j;i++)
						{
							if(strcmp(l[i].auther_name,auther)==0 )		// condition for when user enter auther name it will print his book title
						
							{
								
								puts(l[i].title_book);
								printf("\n-----------------------------------------------------\n");
							}
						
						}
						break;
					}
				case 4:
					{
					
							printf("ENTER THE NAME OF THE BOOK:\n");
							fflush(stdin);
							gets(book);
							printf("BOOK NAME :\n");
						for(i=0;i<j;i++)
						{
						
							if(strcmp(l[i].title_book,book)==0)
					
									// condition for when user enter name of book it will print his book title
							{
								
								puts(l[i].title_book);
								printf("\n--------------------------------------------------\n");
							}
							
						}
						break;
					}
					
				case 5:
					{
						
						printf("TOTAL BOOKS ARE %d\n-------------------------------------------\n",j);			// j is counnting the books in the libraray
						break;
					}
				case 6:
					{
						printf("ENTER BOOK NAME:\n");
						fflush(stdin);
						gets(book);
						for(i=0;i<j;i++)
						{
							if(strcmp(l[i].title_book,book)==0)
							{
								
								if(l[i].flag == 1)	
											// CONDITION FOR ISSUED OR AVAILIBILITY
							{
								printf("THE BOOK IS AVAILABLE:\n----------------------------------------------\n");
							}
							
							else
							{
								printf("THE BOOK IS NOT AVAILABLE:\n--------------------------\n");
							}
								
								printf("\n--------------------------------------------------\n");
							}
						}
						
						break;
					}
					
					default :
					printf("ENTER VALID CHOICE:\n");
			}
			
	}

}
