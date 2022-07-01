#include<stdio.h>
int main(){
	//CONVERTING AN INTEGER IN (SECONDS) INTO HOURS, MINUTES ,SECONDS
	int hours =0,min=0,sec=0;
	printf("ENTER AN INTEGER IN (SECONDS)");
	scanf("%d",&sec);
	// 1hours=3600sec
	hours=sec/3600;
	sec=sec%3600;
	// 1minutes=60 seconds
	min=sec/60;
	sec=sec%60;
	printf("\n HOURS:%d",hours);
	printf(" \n MINUTES:%d",min);
	printf("\n SECONDS:%d",sec);
	return 0;
	
}
