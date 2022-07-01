#include<stdio.h>
int main(){
	int num;
	printf("ENTER NO < 255:\n");
	scanf("%d",&num);
	//turning off 4th and 7th bits we get 72 in decimal
	
	if((num&72)==72)
	
	 {
		num=(num^72);
		printf("THE VALUE AFTER TURNING OFF BIT IS %d :",num);
	}
	else
	printf("THE VALUE NOT CHANGE IT IS STILL %d: ",num);
}

