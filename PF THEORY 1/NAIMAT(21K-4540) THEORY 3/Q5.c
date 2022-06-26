#include<stdio.h>
#include<math.h>
#include<conio.h>
int main()
{
	int x1=1,y1=3,x2,y2,x3,y3,x4,y4,x5,y5,x6,y6;
	int R,A,B,C,D,N;
	float distance_RA,distance_RB,distance_RC,distance_RD,distance_RN;
	int msd,i=0;
	float Nterm;
	
	R = (x1,y2);
	A = (x2,y2);
	B = (x3,y3);
	C = (x4,y4);
	D = (x5,y5);
	
		
	printf("======================================================================================================\n");
	printf("ENTER THE MOST SIGNIFICANT DIGIT OF YOUR MOBILE NO:\n");
	scanf("%d",&msd);
	
		if ( msd > 0 && msd <= 9)
		{
			// NTERM IS = N
			// GIVEN CONDITION
			Nterm = pow(2,msd) * 0.0625;
			printf (" THE NTH TERM IS  = %f \n",Nterm);
		}
		else 
		{
			// GIVEN CONDITION
			Nterm = pow(2,msd) * 3+4;
			printf (" THE NTH TERM IS  = %f \n",Nterm);
		}
		
			printf("======================================================================================================\n");
		 	printf("ENTER THE REFRENCE POINTS ARE\n%d\n%d\n",x1,y1);	// REFRENCE POINTS ARE GIVEN (1,3)

		 	
		 	for (i=1; i<=Nterm;i++)
		 		{
		 			printf("======================================================================================================\n");
		 			printf("\nENTER THE POINTS OF A:\n");		// YOU CAN SELECT ANY POINT
		 			scanf("%d%d",&x2,&y2);
		 	
					// DISTANCE FORMULA = sqrt ((x2 - x1) * (x2 - x1) + (y2 - y1) * ( y2 - y1)); (3,1) (4,8)
		
		 			distance_RA = sqrt ((x2 - x1) * (x2 - x1) + (y2 - y1) * ( y2 - y1));   //SELECT ANY POINT
		 	
		 			printf("THE DISTANCE FROM REFRENCE POINT R TO A IS %f \n ",distance_RA);
		 		
		 			printf("======================================================================================================\n");
		 			printf("\n ENTER THE POINTS OF B:\n");
		 			scanf("%d%d",&x3,&y3);
		 			distance_RB = sqrt ((x3 - x1) * (x3 - x1) + (y3 - y1) * ( y3 - y1));      //SELECT ANY POINT
		 			printf("THE DISTANCE FROM REFRENCE POINT R TO B IS %f \n",distance_RB);
		 			
		 			printf("======================================================================================================\n");
		 			printf("\nENTER THE POINTS OF C:\n");
		 			scanf("%d%d",&x4,&y4);
		 			distance_RC = sqrt ((x4 - x1) * (x4 - x1) + (y4 - y1) * ( y4 - y1));     //SELECT ANY POINT
		 			printf("THE DISTANCE FROM REFRENCE POINT R TO C IS %f \n",distance_RC);
		 			
		 			printf("======================================================================================================\n");
		 			printf("\nENTER THE POINTS OF D:\n");
		 			scanf("%d%d",&x5,&y5);
		 			distance_RD = sqrt ((x5 - x1) * (x5 - x1) + (y5 - y1) * ( y5 - y1));         //SELECT ANY POINT
		 			printf("THE DISTANCE FROM REFRENCE POINT R TO D IS %f \n",distance_RD);
		 			
		 			
		 			printf("======================================================================================================\n");	
			 		}
		 			getch ();
		 	
}
