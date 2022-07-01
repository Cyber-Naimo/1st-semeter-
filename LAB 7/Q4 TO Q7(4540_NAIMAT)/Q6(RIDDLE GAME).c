#include <stdio.h>

int main() 
{
  int QUESTIONS = 7;

  char T, B, I, C, P;
  
  int count = 0, correct =0, wrong = 0;

  printf(" \n \n \t \t \t \t   WELCOME TO THE MIND GAMES \n\n \n \n");
  printf(
      "PLEASE READ THE INSTRUCTION CAREFULLY:\n"
      " 1) CORRECT ANSWER GIVES YOU 4 POINT.\n"
      " 2) WRONG ANSWER RESULT IN -1 POINT.\n"
      " 3) YOU NEED TO SCORE AT LEAST 20 OR 16  TO WIN THIS GAME.\n"
      " 4) 2 WRONG ANSWERS WILL END THE GAME.\n");

  int i = 0;
  for (i = 1; i <= QUESTIONS; i++) 
  {
    switch (i)
	 {
      case 1:
        printf("1) what letter is a drink?\n");
        
        scanf(" %c", &T);

        if (T == 'T') 
		{
          count+= 4;
          correct += 1;
        }
		
		 else 
		 
		{
          count -= 1;
          wrong+= 1;
        }

        break;
      case 2:
        printf("2) what letter of the alphabet is an insect?\n");
        
        scanf(" %c", &B);

        if (B == 'B')
		 {
          count  += 4;
          correct += 1;
        }
        
		 else 
		{
          count -= 1;
          wrong += 1;
        }
        break;
      case 3:
        printf("3) what letter is a part of head \n");
       
        scanf(" %c", &I);

        if (I == 'I') 
		{
          count += 4;
          correct += 1;
        } 
		else
		 {
          count -= 1;
          wrong += 1;
        }
        break;
      case 4:
        printf("4) what letter is a drink?\n");
       
        scanf(" %c", &C);

        if (C == 'C') 
		{
          count += 4;
          correct += 1;
        }
		 else 
		 {
          count -= 1;
          wrong += 1;
        }
        break;
      case 5:
        printf("5) What leter is a vegatable?\n \n");
        
        scanf(" %c", &P);

        if (P == 'P') 
		{
          count += 4;
          correct += 1;
        }
        
		 else 
		 {
          count -= 1;
          wrong += 1;
        }
        break;
      default:
        break;
    }
    if (wrong == 2) 
		{
      	printf("\t \t  GAME OVER ");
      	return 0;
    	}
 }

  printf("\t \t ============= CONGRATULATIONS YOU WON ! =============\n");
  
  printf(" \t \t \t \t YOU WON THE GAME \n \n \n ");
	printf("THE SCORE IS %d:",count);
  printf("\t \t \t YOU HAVE ANSWERED %d QUESTIONS:\n  \n", correct);

  printf("\t \t \t \t %d CORRECT ANSWERS\n \n\n", correct);
  printf("\t \t \t \t %d WRONG ANSWERS\n \n", wrong);

  return 0;
}
