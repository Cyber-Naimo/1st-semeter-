#include<stdio.h>
int main()
{
int intensity;

printf("ENTER THE LIGHT SENSOR VALUE RANGE FROM 0 TO 1000 : ");
scanf("%d",&intensity);

if(intensity>=0 && intensity<=1000)
{
    if(intensity>500)
    {
        printf("IT'S BEEN SUNSHINE");
    }
    else if(intensity>=0 && intensity<=100)
    {
        printf(" IT'S BEEN EVENING");
    }
    else if(intensity>=100 && intensity<=500)
    {
        printf(" IT'S BEEN LIGHTING");
    }

}
else {
		 printf("LIGHT SENSOR VALUE IS OUT OF RANGE");

}


}
