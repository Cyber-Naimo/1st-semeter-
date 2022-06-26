	#include<math.h>
	#include<stdio.h>
	int main(){
	int integer, count, roll_no, mode1,mode2,mode3,mode4,x,y,z,w, division1;
	
	printf("ENTER FOUR DIGIT POSITIVE INTEGERS ROLL NO:\n");
	scanf("%d", &integer);
	
	printf("WHAT IS THE LAST DIGIT OF YOUR ROLL NO:\n");
	scanf("%d", & roll_no);
	
	if(integer>999 && integer<=9999){

	if(integer==0){
	count = 1;
	}
	else {
	count = log10(integer) + 1;
	printf("TOTAL DIGITS ARE : %d\n", count);
	
	if ((integer<0)||(count > 4))
	{
	printf("INVALID INPUT! EXECUTE PROGRAM AGAIN AND ENTER A VALID INTEGER: \n");
	} 
	else if (count==1){
	if (integer == roll_no)
   {
	printf("THE DIGIT MATCHES YOUR LAST DIGIT: \n");
	}
	 else {
	printf("THE DIGIT DOES NOT MATCHES YOUR LAST DIGIT: \n");
	}
	} 
	else if (count==2)
	{
	mode1 = integer%10;
	
	division1 = integer/10;
	
	if (division1 == mode1 && mode1 == roll_no )
	{
	printf("BOTH  DIGITS MATCHES YOUR LAST DIGIT OF ROLL NO:\n");
	} 
	
	else if (mode1 == roll_no || division1 == roll_no)
	
	{
	printf("ONE DIGIT MATCHES YOUR LAST DIGIT OF ROLL NO: \n");
	}	
	
	 else 
	{
	printf("NONE OF THE DIGIT MATCHES YOUR LAST DIGIT OF YOUR ROLL NO:\n");
	}
	}	
	 else if (count==3)
	{
	mode1=integer%10;
	
	x=integer%100;
	
	y=x-mode1;
	
	mode2=y/10;
	
	mode3=integer/100;
	
	if (mode1 == mode2 && mode2 == mode3 && mode3 == roll_no)
	{
	printf("ALL OF THE DIGITS MATCHES WITH YOUR LAST DIGIT OF YOUR ROLL NO :\n");
	} 
	else if ((mode1 == mode2 && mode2 == roll_no)||(mode2 == mode3 && mode3 == roll_no))
	{
	printf("TWO OUT OF THREE DIGIT MATCHES WITH YOUR LAST DIGIT OF YOUR ROLL NO:\n");
	}
	 
	else if ((mode1 == roll_no)||(mode2 == roll_no)||(mode3 == roll_no)){
	printf("ONE OUT OF THREE DIGITS MATCHES WITH YOUR LAST DIGIT OF YOUR ROLL NO:\n");
	}
	 else {
	printf("NONE OF THE DIGITS MATCHES WITH YOUR LAST DIGIT OF ROLL NO:\n");
	}
	}
		 else if (count==4)
		{   
	mode1=integer%10;
	x=integer%100;                   
	y=x-mode1;
	
	mode2=y/10;
	z=integer%1000;
	w=z-x;
	
	mode3=w/100;
	mode4=integer/1000;
	
	if (mode1== mode2 &&  mode2 ==  mode3 &&  mode3==  mode4 &&  mode4==roll_no)
	{
	printf("ALL OUT OF FOUR DIGIT MATCHES WITH YOUR LAST DIGIT OF ROLL NO: \n");
	} 
	else if (( mode1 == mode2 &&  mode2 ==  mode3 &&  mode3==roll_no)||( mode1== mode2&& mode2== mode4&& mode4==roll_no)||
	( mode2 == mode3&& mode3== mode4&& mode4==roll_no)||( mode1== mode3 && mode3==4 && mode4==roll_no)){
	printf("THREE OUT OF FOUR DIGIT MATCHES WITH YOUR LAST DIGIT OF ROLL NO:\n");
	}
	 else if (( mode1 == mode2 && mode2 == roll_no)||(	mode2 == mode3 &&	mode3 ==roll_no)||(	mode3 == mode4 && mode4 == roll_no)||
	(	mode1 == mode3 && mode3==roll_no)||( mode1== mode4&&mode4 == roll_no)||(	mode2 ==	mode4 &&	mode4 ==roll_no ) )
	{
	printf("TWO OUT OF FOUR DIGIT MATCHES WITH YOUR LAST DIGIT OF ROLL NO:\n");
	}	
	 }
	else if (mode1==roll_no || mode2 ==roll_no || mode3 ==roll_no || mode4 ==roll_no){
		
	printf("ONE OUT OF FOUR DIGIT MATCHES WITH YOUR LAST DIGIT OF ROLL NO:\n");
	} 
	
	else
 {
printf("NONE OF  DIGIT MATCHES WITH YOUR LAST DIGIT OF ROLL NO:\n");
}
}
}
else 
printf("INVALID INPUT! ENTER FOUR DIGIT POSITIVE INTEGER:");
}
