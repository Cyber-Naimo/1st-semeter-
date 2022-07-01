//CODE FOR PASCAL TRIANGLE USNIG FOR  LOOP//
 #include<stdio.h>
int main()
{
  int number;
  int row =1;
  int j =1;
  int i =1;

  printf("****************** ENTER THE NUMBER OF ROWS:*********************** \n ");
  scanf("%d:",&number);
  for( row=1; row<=number; row++)
  {
  	//The first row is 0 1 0 whereas only 1 acquire a space in pascal's triangle,
	// 0s are invisible. Second row is acquired by adding (0+1) and (1+0).
    int a =1;

    for( j=1;j<=45-row;j++)
    //example:
    //row 1 = 1

	//row 2 = (0+1), (1+0) = 1, 1

	//row 3 = (0+1), (1+1), (1+0) = 1, 2, 1

	//row 4 = (0+1), (1+2), (2+1), (1+0) = 1, 3, 3, 1

	//row 5 = (0+1), (1+3), (3+3), (3+1), (1+0) = 1, 4, 6, 4, 1

	//row 6 = (0+1), (1+4), (4+6), (6+4), (4+1),(1+0) = 1, 5, 10, 10, 5, 1
	
	
    printf(" ");

    for( i=1;i<=row;i++)
    {
      printf(" % 3d",a);
      a = a* (row-i) / i;
    }

		printf("\n");
  	}

  return 0;
}

