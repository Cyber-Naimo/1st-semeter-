															//PROGRAM TO DECRYPT FOUR DIGIT NUMVER//																														
#include<stdio.h>
#include<stdlib.h>

int main(){
    int integer;
	int w,x,y,z;
	int encrypted,decrypted;
    
    printf("ENTER A FOUR DIGIT NUMBER THAT YOU WANT TO DECRYPT!\n");
    scanf("%d",&integer);
     if(integer>999 && integer<=9999)
	 {
     	w=(integer/1000) %10;
     	x=(integer/100) %10;
     	y=(integer/10) %10;
     	z=(integer%10);
     	
     	// THE CONDITION IS Replace each digit with the result of adding 5 to the digit and getting the remainder after dividing
		  //the new value by 8.Then swap the first digit with the second, and swap the third digit with the fourth SO/*
		  
      	w =	 (w + 5) % 8;
      	x = (x + 5) % 8;
       	y = (y + 5) % 8;
      	z = (z + 5) % 8;
      	
     	// FORMULA FOR ENCRYPTION
     	
     	encrypted = y + z *10 + w*100 + x*1000;
     	printf("THE ENCRYPTED INTEGER IS %d\n",encrypted);
     	
     	// NOW WE APPLY DECRYPTION METHOD
     	
     	x =(encrypted%10);
     	w = (encrypted/10) %10;
     	y = (encrypted/1000) %10;
     	z = (encrypted/100) %10;
     	
     	// THE CONDITION IS Replace each digit with the result of adding 5 to the digit and getting the remainder after dividing
		 //S the new value by 8,Then swap the first digit with the second, and swap the third digit with the fourth SO/*
		  
     	w = w+8-5;
     	x = x+8-5;
     	y = y+8-5;
     	z = z+8-5;
     	// DECRYPTION FORMULA//
     	
     	decrypted= w+y*100+ z*1000 + x*10;
     	printf("THE DECRYPTED INTEGER IS %d\n",decrypted);
     	
     	if(integer==decrypted)
     	{
     		printf("THE DATA BEFORE ENCRYPTION AND AFTER DECRYPTION IS SAME! \n CONGRATULATIONS PROGRAM IS CORRECT!");
		 }
		 else {
		 	printf("THE DATA BEFORE ENCRYPTION AND AFTER DECRYPTION IS NOT SAME! \n PLEASE TRY AGAIN !");
		 }
		 }
		 else {
		 	printf("INVALID INPUT EXCECUTE PROGRAM AGAIN !");
		 }
     	
	 }
    
