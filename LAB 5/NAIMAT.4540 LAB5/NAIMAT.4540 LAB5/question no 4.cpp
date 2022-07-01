#include <stdio.h>
int main()
 {
  int sum,difference,product,qutient,num1,num2;
  char op;
 
  printf("Enter two operands: ");
  scanf("%d %d", &num1 , &num2);
  
printf("Enter an operator (+, -, *, /n): ");
  scanf(" %c",&op);
  sum=num1+num2;
  difference=num2-num1;
  product=num1*num2;
  qutient=num1/num2;
  

  switch (op) {
    case '+':
      printf("THE SUM OF NO IS %d",sum);
      break;
    case '-':
      printf("THE DIFFERENCE OF A NO IS %d",difference);
      break;
    case '*':
      printf("THE PRODUCT IS %d",product);
      break;
    case '/':
      printf("THE QUTIENT IS %d",qutient );
      break;
    // operator doesn't match any case constant
    default:
      printf("Error! operator is not correct");
  }


} 
