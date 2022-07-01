// PROGRAM 4
#include<stdio.h>
main(){
	float bitcoins,RS,converted,value=(7168529);
	printf("please enter the number of bitcoins:\n");
	scanf("%f",&bitcoins);
	RS=(bitcoins*value);
	printf("THE RS:%f\n",RS);
	printf("please Enter the RS:\n");
	scanf("%f",&RS);
	bitcoins=(RS/value);
	printf("The Bitcoins: %f",bitcoins);
}

