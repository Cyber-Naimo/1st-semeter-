#include<stdio.h>
int main()
{

    int t;
    printf("Enter the time (1-24): ");
    scanf("%d", &t);
    printf("\n");
    if(t>5 && t<=11)
        printf("Good MORNING");
        
    else if(t>12 && t<=18)
        printf("GOOD AFTERNOON");
        
      else if(t>13 && t<=24)
      printf("Good Night");
      else
      printf(" not given");
      

    
    return 0;
}
