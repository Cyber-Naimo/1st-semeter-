#include<stdio.h>
#include<math.h>
#include<conio.h>

	int Add(int *x, int *y,int choice)
	{
		return (*x +*y);
	}
	int Sub(int *x, int *y,int choice)
	{
		return *x - *y;
	}
	int Mul(int *x, int *y,int choice)
	{
		return *x * *y;
	}
	int Div(int *x, int *y,int choice)
	{
		return *x / *y;
	}

int main()
{
	int x = 0;
	int y = 0;
	int retun = 0;
	int choice;
	printf("***************************************\n");
	
	printf("*******ENTER 1 FOR ADDITION*************\n");
	printf("*******ENTER 2 FOR SUBCTRACTION*********\n");
	printf("*******ENTER 3 FOR MULTIPLICATION*******\n");
	printf("*******ENTER 4 FOR DIVISION*************\n");
	printf("*******ENTER 5 FOR EXIT****************\n");
	
	printf("***************************************\n");
	scanf("%d",&choice);
	
	switch (choice)
	{
		case 1:
			{
			
					printf("ENTER TWO NUMBER:\n");		
					scanf("%d%d",&x,&y);
					retun=Add(&x,&y,1);				// retun basically is reurning value
					printf("THE ADDITION OF TWO NUMBER IS = %d",retun);
					break;
			}
		case 2:
			{
					printf("ENTER TWO NUMBER:\n");
					scanf("%d%d",&x,&y);
					retun=Sub(&x,&y,2);
					printf("THE SUBTRACTION OF TWO NUMBER IS = %d",retun);
					break;			
			}
		case 3:
			{
					printf("ENTER TWO NUMBER:\n");
					scanf("%d%d",&x,&y);
					retun=Mul(&x,&y,3);
					printf("THE MULTIPLICATION OF TWO NUMBER IS = %d",retun);
					break;			
			}
		case 4:
			{
					printf("ENTER TWO NUMBER:\n");
					scanf("%d%d",&x,&y);
					retun=Div(&x,&y,4);
					printf("THE DIVISION OF TWO NUMBER IS = %d",retun);
					break;			
			}
		default:
			{
					printf("ENTER RIGHT CHOICE:\n");
					break;
			}
	}
	getch ();
}
