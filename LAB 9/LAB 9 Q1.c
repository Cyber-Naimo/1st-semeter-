
#include<stdio.h>
int main()
{
	int a[20];
	int b[20];
	int ret;
	
	printf("ENTER YOUR 1st STRING:\n");
	gets(a);
	printf("ENTER YOUR 2nd STRING:\n");
	gets(b);
	
	ret = strcmp(a,b);		// COMPARING BOTH STRINGS
	
	if(ret> 0)
	{
		printf("String1 is Bigger\n");
	}
	else if(ret==0)
	{
		printf("STRING IS SAME\n");
	}
	else
	{
		printf("STRING 2 is Bigger\n");
		
	}
}
	
	
	
	
	

