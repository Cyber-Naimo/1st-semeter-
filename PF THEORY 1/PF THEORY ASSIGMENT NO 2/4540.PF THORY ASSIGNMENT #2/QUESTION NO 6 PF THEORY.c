//PROGRAM TO CHECK PALINDROME NUMBER//
#include<stdio.h>
#include<conio.h>
int main()
{
    int num, reverse=0, rem, temp;
    
    printf("ENTER A FIVE DIGITS POSITIVE NUMBER: \n");
    scanf("%d", &num);
    
    temp = num;
    while(temp>0)
    {
        rem = temp%10;
        reverse = (reverse*10)+rem;
        temp = temp/10;
    }
    if (num>99999 ||num<10000)
    
	 printf("ERROR! ENTER FIVE DIGIT POSITIVE NUMBER:\n");
	 
  else  if(reverse==num)
  
        printf("\nIT IS  A PALINDRONE NUMBER:");
        
    else  
    
        printf("\nIT IS NOT A PALINDROME NUMBER:");
        
    
    return 0;
}
