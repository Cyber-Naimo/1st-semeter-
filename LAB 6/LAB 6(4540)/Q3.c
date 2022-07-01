#include <stdio.h>

int main()
{ int FSC=0, NTS=0;
	printf("ETER MARKS OF  NTS: \n FSC:");
	scanf("%d %d",&FSC,&NTS);
	if(FSC<50)
	{
		printf("YOU ARE NOT ELIGIBLE!");
		
	}
	else if(FSC>70)
	{
		if(NTS>70)
		{
		
	printf("YOU ARE ELIGIBLE FOR NUST MECHANICAL:\n");
	}
}

	else if(FSC>70)
	{
		if(NTS>60)
		
		{
			printf("YOU ARE ELIGIBLE FOR NUST ELECTRICAL:\n");
		}
	}
	else if(FSC>70){
		if(NTS>50){
			printf("YOU ARE ELIGIBLE FOR NUST TELECOMMUNICATION:\n");
		}
	}
	else if(FSC>60){
		if(NTS>50){
			printf("YOU ARE ELIGIBLE FOR NED IT:");
		}
	}
	else if(FSC>50){
		if(NTS>50){
			printf("YOU ARE ELIGIBLE FOR NED CHEMICAL :");
		}
	}
	else if (FSC>40){
		if(NTS>50){
			printf("YOU ARE ELIGIBLE FOR NED COMPUTER: ");
		}
	}
	
}
	
