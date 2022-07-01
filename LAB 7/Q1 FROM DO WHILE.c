#include<stdio.h> 
int main() 
{
 int a, sum=0; 
 for(; ;)
  { 
  scanf("%d",&a);
   if(a==-999) 
   {
    break;
	}
	 sum=sum+a; 
	
	 } 
	 printf("The sum is %d", sum);
}
