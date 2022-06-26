#include<stdio.h>
#include<math.h>
int main() {
	int angle1,angle2,angle3,angle4;
	int side1,side2,side3,side4;
	printf("ENTER FOUR ANGLES:\n");
	scanf("%d %d %d %d",&angle1,&angle2,&angle3,&angle4);
	
		printf("ENTER FOUR SIDES:\n");
	scanf("%d %d %d %d",&side1,&side2,&side3,&side4);
	
	if(angle1+angle2+angle3+angle4==360)
	{
		if ((side1==side2 && side1==side3 && side1==side4) && (angle1==90 && angle2==90 && angle3==90 && angle4==90)){
			printf("IT IS A SQUARE:\n");
		}
		else if (((side1==side2 || side1==side3 || side1==side4) && ( (side2==side3 || side2==side4) || (side3==side4))) && 
		(angle1==90 && angle2==90 && angle3==90 && angle4==90)){
			printf("It Is A Rectangle:\n");
		}
		else if (((angle1==angle2 || angle1==angle3 || angle1==angle4) && ( (angle2==angle3 || angle2==angle4) || (angle3==angle4))) &&
		 (side1==side2 && side1==side3 && side1==side4)){
		
		printf("IT IS A RHOMBUS:\n"); 
	    }	
	    else if(((side1==side2 || side1==side3 || side1==side4) && ( (side2==side3 || side2==side4) || (side3==side4))) &&
		 (((angle1==angle2 || angle1==angle3 || angle1==angle4)) && 	((angle2==angle3 || angle2==angle4) || (angle3==angle4)))){
	    	printf("IT IS A PARRALLELOGRAM:\n");
		} 
		else if(((angle1==angle2 || angle1==angle3 || angle1==angle4)) && ((angle2==angle3 || angle2==angle4) || (angle3==angle4)) &&
		 ((side1==side2 || side1==side3 || side1==side4) || (side2==side3 || side2==side4) || (side3==side4))){
			printf("IT IS A TRAPOZOID:\n");
		}
		else if((((angle1==angle2 || angle1==angle3 || angle1==angle4) || (angle2==angle3 || angle2==angle4) || (angle3==angle4)) &&
		 ((side1==side2 || side1==side3 || side1==side4) && ( (side2==side3 || side2==side4) || (side3==side4))))
	
	)printf("IT IS A KITE:\n");
	}
	else 
	printf("ERROR! SUM OF ANGLE MUST BE 360,ENTER VALID ANGLES:");																												
}

