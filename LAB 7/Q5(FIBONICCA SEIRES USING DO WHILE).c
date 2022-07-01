#include <stdio.h>
int main() {
	 int sum=2;
  int term1=1, term2= 1, nextTerm = 0, n;
  printf("ENTER RANGE OF NUMBER:\n ");
  scanf("%d", &n);

  // displays the first two terms which is always 0 and 1
  printf("FIBONICCA SERIES IS :\n %d, %d, ", term1, term2);
  nextTerm = term1 + term2;
  
	//using while loop for better work and understanding
	//compare the input range to next term
  while (nextTerm <= n) 
  {
  	//Method//
  	
    printf("%d,", nextTerm);
    term1 = term2;
    term2 = nextTerm;
    nextTerm = term1 + term2;
    sum+=term2;
  } 
	 
	printf("\nTHE SUM IS %d \n",sum);
	if(sum %2==0)
	{
		printf("THE SUM %d IS DIVISIBLE BY 2",sum);
	}
	else if(sum %3 == 0) 
	{
		printf("THE SUM  %d IS DIVISIBLE BY 3",sum);
	}
	else if (sum %5 == 0)
	{
		printf("THE SUM  %d IS DIVISIBLE BY 5",sum);
	}
	else 
	
	printf("ENTER VALID INPUT! PLEASE TRY AGAIN");
  return 0;
}

