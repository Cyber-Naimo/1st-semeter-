#include<stdio.h>
#include<math.h>
#include<conio.h>
#define SIZE 5
int main ()
{
	int std1[SIZE],std2[SIZE],i,j;
	
	printf("ENTER THE MARKS OF AN ARRAY 1:\n");
	for(i=0;i<SIZE;i++)
		{
			
			printf("ENTER MARKS OF STUDENT %d\n",i+1);
			scanf("%d",&std1[i]);
	
			if(std1[i]< 0 || std1[i]>9)
				// condition for range
				{
					printf("ERROR:\n");
				}
			
		}
		printf("\n\n");
		
		
		printf("ENTER THE MARKS OF AN ARRAY 2:\n");
		
		for(i=0;i<SIZE;i++)
		{
			
			printf("ENTER MARKS OF STUDENT %d\n",i+1);
			scanf("%d",&std2[i]);
	
			if(std2[i]< 0 || std2[i]>9)
				// condition for range
				{
					printf("ERROR:\n");
				}
			
		}
		for(i=0;i<SIZE;i++)
		{
			if(std1[i] == std2[i])
			
				j++;
			
			
			if(j==1)
			
				printf("\nTHE COMMON MARKS ARE ");
			
			
			if(std1[i] == std2[i])
			
				printf("%d ",std1[i]);
			
		}
		if(j==0)
	printf("NO COMMON MARKS FOUND:");
		
			

}





