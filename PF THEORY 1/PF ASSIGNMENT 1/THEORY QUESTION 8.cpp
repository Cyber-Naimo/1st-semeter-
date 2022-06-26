#include<stdio.h>
main(){
	char op;
	float op1,op2;
	printf("Enter the operator: ");
	scanf("%c",&op);
	if(op!='q'){
		printf("Enter two operands: ");
		scanf("%f %f",&op1,&op2);
		if(op=='+'){
			printf("The sum is %f: \n",op1+op2);
			float sum=op1+op2;
			float sub=op2-op1;
			printf("The sub is %f: \n",sub);
			if(sum>sub)
				printf("sum is greater!");
			else
				printf("sub is greater!");
		}
		else if(op=='-'){
			printf("The difference is: %f",op1-op2);
		
		}
		}
		}

