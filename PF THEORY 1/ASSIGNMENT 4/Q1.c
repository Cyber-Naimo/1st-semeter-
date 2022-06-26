#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<conio.h>
struct record
{
	float percentage,average;
};
	struct record r;
	
struct record marks(float,float,float);			// structure function declaration or prototype
int main()
{
	float s1,s2,s3;

	printf("ENTER MARKS OF THREE SUBJECTS:\n");		/// MARKS OF THREE SUBJECTS MATH,PHYSICS ENGLISH
	scanf("%f%f%f",&s1,&s2,&s3);
									
	(marks(s1,s2,s3).average,marks(s1,s2,s3).percentage);	// calling the function in main and returning the function value in main;
	printf("THE AVERAGE IS %f\n\n",r.average);			// RETURNING THE AVERAGE AND PERCENTAGE;
	printf("THE PERCENTAGE IS %f \n",r.percentage);
}
struct record marks(float sub1,float sub2,float sub3)			// function defination

{
	float sum=0,total = 300;		// 1 SUBJECT MAX MARKS = 100
	float average,percentage;
	sum =sub1+sub2+sub3;			// sum formula
	average = sum/3; 				// AVAERAGE FORMULA
	percentage = (sum*100)/total;		// PERCENTAGE OF 3 SUBJECTS;
	r.average=average;
	r.percentage=percentage;
	
	return 	(r);	// RETURNING THE VALUE

	
	
	
}
