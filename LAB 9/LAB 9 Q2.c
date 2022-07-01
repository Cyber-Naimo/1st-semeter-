#include <stdio.h>
#include <string.h> 
#include<math.h>
#include<conio.h>
int main()
{
  	char NAME[100];
  	char NAME2[100];
	int i, k,j,l,freqncy,freqncy2;
  	int max=0;
	int max2=0;	
  	int count[256]={0}; 
  	int counter[256]={0};
  	
 
  	printf("ENTER YOUR GOOD NAME:\n ");
  	gets(NAME);
  	
  	k=strlen(NAME);
  		
  	for(i=0;i<k;i++)
  	{
  		count[NAME[i]]++;
		if(max<count[NAME[i]])
		{
			max=count[NAME[i]];
			freqncy=NAME[i];
		}
	}
	printf("THE MAXIMUM CHARACTER USE IN YOUR NAME IS : %c.\n",freqncy);
	
  	printf("ENTER YOUR ENROOLED COURSE:\n ");
  	gets(NAME2);
  	l=strlen(NAME2);
  		
  	for(i=0;i<l;i++)
  	{
  		counter[NAME2[i]]++;
		if(max2<counter[NAME2[i]])
		{
			max2=counter[NAME2[i]];
			freqncy2=NAME2[i];
		}
	}
	printf("THE MAXIMUM CHARACTER USE IN YOUR COURSE IS : %c.",freqncy2);
	getch ();
}
