#include<stdio.h>
#include<math.h>
#include<conio.h>
#include<stdlib.h>

	int main ()
{
	int a[5];
	int b[5];
	int arr[10],i,j,k,temp,r,count=0;
	printf("ENTER ELEMENTS OF SET A:\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);		// taking elements
	}
	printf("ENTER ELEMENTS OF SET B:\n");
		for(i=0;i<5;i++)
	{
		scanf("%d",&b[i]);	// taking elements
	}
	for(i=0;i<5;i++)
	{
		arr[i]=a[i];			// ASSIGNING ARRAY  1 TO ARRA[I]
	}
	
	for(i=0,j=5;i<5,j<10;i++,j++)	// CHECKING EACH ELEMENT
	{
		
		for(k=i;k<5;k++)
		{
			
			if(a[k]==b[i])		// ASSIGNING ARRAY  2 TO ARRA[K]
			{
				count++;
				i++;

			}
		}
			if(j==(5-count))
			{
				break;
			}
			arr[j]=b[i];
	}
	
			printf("\nSET A: { ");
			for(i=0;i<5;i++)
			{
				printf("%d ",a[i]);			// PRINTING SET A ELEMENTS
			}
			printf("}");
			printf("\nSET B: { ");
			
			for(i=0;i<5;i++)
			{
				printf("%d ",b[i]);		// PRINTING SET B ELEMENTS
			}	
			printf("}");
			
			printf("\n\nAFTER TAKING INTERSECTION OF BOTH MATRIX:\n");
			printf("\n\nINTERSECTION OF SET A AND B: { ");
			for(i=0;i<5;i++)
			{
				for(j=0;j<5;j++)
				{
					if(a[i]==b[j])		// IF ELEMENTS OF BOTH MATRIX FOUND TO BE SAME PRINT IT
					{
						printf("%d ",a[i]);
						break;
					}
				}
			}
			printf("}");
			

			printf("\n\nAFTER TAKING UNION OF BOTH MATRIX:\n");
			printf("\n\nUNION OF SET A AND B: { ");
			
			for(i=0;i<10-count;i++)		// TAKING UNION
			{
				printf("%d ",*(arr+i));
			}
			printf("}");
		getch ();
	
}
