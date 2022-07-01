#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int main()
{
	
	int size1,size2,c,i,*ptr,j,ascend;
	printf("HOW MANY ELEMENTS YOU WANT TO ENTER:\n");
	scanf("%d",&size1);
	ptr=(int *)malloc(size1*sizeof(int));
	printf("ENTER ELEMENTS:");
	for(i=0;i<size1;i++)
	{
		scanf("%d",(ptr+i));
		
	}
	printf("HOW MANY ELEMENTS YOU WANT TO ENTER:\n");
	scanf("%d",&size2);
	c=size1+size2;
	ptr=(int*)realloc(ptr,c*sizeof(int));
	printf("ENETR REAMINING ELEMENTS: ");
	for(i=size1;i<c;i++)
	{
		scanf("%d",(ptr+i));
	}
	printf("\nThe ELEMENNTS ARE:\n");
	for(i=0;i<c;i++)
	{
		printf("%d ",*(ptr+i));
	}
	printf("\n\nSORTING THE ARRAY IN ASCENDING ORDER ");
	 for (i = 0; i < c; i++)
	 {
  
        for (j = i + 1; j < c; j++)
		{
  
            if (*(ptr + i) >*(ptr + j)) 		// ascending order condition
			{
  
                ascend = *(ptr + i);
                *(ptr + i) = *(ptr + j);
                *(ptr + j) = ascend;
            }
        }
    }
    printf("\n\nAFTER SORTING IN ASCENDING ORDER:\n");
	for(i=0;i<c;i++)
	{
		printf("%d\n",*(ptr+i));
	}
	free(ptr);
	getch ();
}
