#include<stdio.h>
#include<math.h>
#define SIZE 10
#include<conio.h>
int main ()
{
	// std = students marks
int std[SIZE],j,i=1;

	for(j=0;j<SIZE;j++)
		{
			//getting marks
			printf("ENTER MARKS OF STUDENT %d\n",j+1);	
			scanf("%d",&std[j]);
			
				if(std [j]< 0 || std[j]>9)
				// condition for range
			{
			printf("ERROR:\n");
			}
	
		}
			printf("\n\n");
	
		int max=0,min=10;
			
			for(i=1,j=0;j<SIZE;j++)
			{
		
				if(std[j]<=10)
					{
					// printing ENTERED MARKS:
					printf("THE MARKS OF STUDENT %d IS %d\n",i,std[j]);
					i++;

					// condition for maximum or minimum
						if(min>std[j])
							{
							min = std[j];
							}
						else
						{
			
						if(max<std[j])
							{
								max = std[j];
							}
						}
					}
				else
				i++;
			
			}
		
		printf("THE MIN VALUE IS %d\n",min);
		printf("THE MAX VALUE IS %d",max);


}



