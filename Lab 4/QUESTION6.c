#include<stdio.h>
int main(){
	//CONVERTING DAYS INTO YEARS, WEEKS AND DAYS;
	int days,weeks,years;
	printf("ENTER TOTAL NO OF SPECIFIED DAYS:\n");
	scanf("%d",&days);
	// 1year=365days
	years=days/365;
    // 1 week=7days
    weeks=(days%365) /7;
    days=days-((years*365)+(weeks*7));
    printf("\n TOTAL YEARS : %d",years);
    printf("\n TOTAL WEEKS : %d",weeks);
    printf("\n TOTAL DAYS : %d",days);
    
	
}
