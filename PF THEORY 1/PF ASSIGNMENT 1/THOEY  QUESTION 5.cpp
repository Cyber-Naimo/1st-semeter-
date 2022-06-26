#include<stdio.h>
main(){
	float temp;
	printf("Enter the temperature in centigrade: ");
	scanf("%f",&temp);
	if(temp<0){
		printf("Freezing weather.");
	}
	else if(temp<10){
		printf("very cold weather.");
	}
	else if(temp<20){
		printf("Cold weather.");
	}
	else if(temp<30){
		printf("Normal temperature");
	}
	else if(temp<40){
		printf("Its hot.");
		
	}
	else{
		printf("Its very hot.");
	}
	
}
