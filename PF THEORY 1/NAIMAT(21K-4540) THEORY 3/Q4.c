#include<stdio.h>  
#include<conio.h>
int main()  
{  
	int  lcm, i =1;		
	int car1_time=10,car2_time=12,MEETING_TIME;
	
	printf("====================================================================================================================\n");
	printf("THE TIME IN MIUTES OF SA_a (CAR A) IS %d \n",car1_time);

	printf("====================================================================================================================\n");
	printf(" THE TIME IN MIUTES OF SB_b (CAR B) IS %d \n",car2_time);

	
	// to find when they will meet we have to take lcm of both cars minutes 
  	// lcm = (10,12) = 60
  	//using ternary operator:
    lcm = (car1_time >car2_time) ? car1_time : car1_time;  
  
   	 do
    	{  
        	if(lcm % car1_time == 0 && lcm % car2_time == 0)  
       	   { 
        		printf("====================================================================================================================\n");
            	printf("BOTH CAR WILL MEET IN %d MINUTES: ",lcm);  
            	i = 1;  
        	}  
       		 lcm++; 
		 
    	}  while(i);
    	
  			getch ();
    		return 0;  
}  
