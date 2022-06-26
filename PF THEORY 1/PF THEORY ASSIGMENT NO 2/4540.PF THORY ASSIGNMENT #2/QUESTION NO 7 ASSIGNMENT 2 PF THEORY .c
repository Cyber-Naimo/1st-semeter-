 #include<stdio.h>
 #include<math.h>
 
 int main()
{
  int x1,y1,x2,y2,x3,y3,x4,y4;
  int slope1,slope2,slope3;

	 printf("ENTER CORDINATES OF 1ST POINT (X1,Y1) : \n");
  	scanf("%d %d",&x1,&y1);
  	
	 printf("ENTER CORDINATES OF 2ND POINT (X2,Y2): \n");
 	 scanf("%d %d",&x2,&y2); 
	   
 	printf("ENTER CORDINATES OF 3RD POINT (X3,Y3) : \n");
   	scanf("%d %d",&x3,&y3);
   	
  	 printf("ENTER CORDINATES OF 4TH POINT (X4,Y4) : \n");
  	scanf("%d %d",&x4,&y4);
  // slope formula Y2-Y1/X2-X1 //
  slope1=(y2-y1)/(x2-x1);
  
  slope2=(y3-y2)/(x3-x2);
  
  slope3=(y4-y3)/(x4-x3);
  
  if(slope1==slope2==slope3)
  
  {
   printf("ALL THE POINTS FALLS ON ONE STRAIGHT LINE:");
  }
  else
  {
   printf("ALL THE POINTS DOES NOT FALLS ON A STRIGHT LINE:");
  
  return 0;
}}
