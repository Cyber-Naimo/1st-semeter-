#include<stdio.h>
int main(){
	int A=10;int B=20;int C=30;int temp;
	temp=B; 
	B=A;
    A=C;
    C=temp;
	printf(" A=%d  B=%d  C=%d",A,B,C);
}
