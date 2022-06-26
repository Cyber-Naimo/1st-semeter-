#include<stdio.h>
#include<math.h>
#include<conio.h>
int main ()
{
float side1,side2,angle,max;
double arr[100];
int j=0,i,k=0;
double area;
for(i=0;i<6;i++)
{
	printf("ENTER SIDES AND ANGLES OF PLOT %d\n\n",k+1);
	printf("ENTER TWO SIDES OF TRIANGLE:\n");			// taking two sides of triangle and angle between them 
	scanf("%f%f",&side1,&side2);
	printf("ENTER ANGLE BETWEEN THEM:\n");
	scanf("%f",&angle);
	area = 1.0/2.0*side1*side2*sin(angle);		//using sin law for calculating area of triangle
	arr[i]=area;													//storing area in arra
	
	printf("\n\nTHE AREA OF PLOT %d IS %lf\n\n\n",j+1,arr[i]);	// area
	j++;
	k++;
}
max = arr[0];
for(i=0;i<6;i++)
{
		if(arr[i]>max)			// CONDITION FOR MAXIMUM AREA OR LARGEST AREA AMONG 6
	{
		max = arr[i];
	}
}
printf("\nTHE GREATER AREA IS  %f\n",max);		// GREATER AREA

}


