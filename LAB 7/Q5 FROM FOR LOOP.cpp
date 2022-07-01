#include <stdio.h>
int main() 
{
  int sum=1;
  int term1 = 0, term2 = 1, nextTerm = 0, number;
  printf("ENTER A RANGE OF FABONICCA SERIES :\n ");
  scanf("%d", &number);

  printf("THE FABONICCA SERIES IS :\n %d, %d, ", term1,term2);
	
  for (nextTerm = term1 + term2; nextTerm <= number; nextTerm = term1 + term2) {
    printf("%d ", nextTerm);
    term1 = term2;
    term2 = nextTerm;
    nextTerm = term1 + term2;
    sum+=term2;
  }
  
  printf("\n");
  printf("THE SUM OF FABONICCA SERIES IS  = %d \n",sum);

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
