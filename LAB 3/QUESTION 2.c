//solution for question 4
#include<stdio.h>
int main(){
	float taxrate;
	float salary;
	float totaltax;
	float paidsalary;
	
	printf("enter your salary \t");
	scanf("%f",&salary);
	
    printf("enter your taxrate \t");
	scanf("%f",&taxrate);
	
	totaltax =(salary*taxrate) /100;
	paidsalary = salary-totaltax;
	printf("totaltax is %f:\t ", totaltax);
	printf("paidsalary is %f:\t", paidsalary);
		
}

