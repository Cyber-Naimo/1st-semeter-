#include<stdio.h>
#include<math.h>
#include<conio.h>

int main()
 {
	int a,b;
	int age;
	float c;
	
	printf("=====================================================================================================\n");
	printf("==================== *****************  ENTER YOUR AGE **************** ============================== \n");
	scanf(" %d",&age);
	printf("=====================================================================================================\n");
	
	for(a=1;a<age;a++)
		{
			for(b=1;b<age;b++)
			{
				// USING PYTHAGOROUS THEOREM
				
				c = sqrt(a*a + b*b);			
	
			if(c == (int)c)
				{
					
				printf("(%d,%d,%d)\n",a,b,(int)c);
				
				}
			}
		}
		getch ();
 }
 
