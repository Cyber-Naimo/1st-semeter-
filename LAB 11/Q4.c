#include<stdio.h>
#include<math.h>
#include<conio.h>
void word_count(char *str ,int size);
int main ()
{

	char str[100];
	printf("ENTER THE STRING OR THE SENTENCE:\n");
	fflush(stdin);
	gets(str);
	printf("\nYOU HAVE ENTER:\t");
	puts(str);
	word_count(str,50);		// CALLING FUNCTION

}

void word_count(char *str,int size)			// FUNCTION DECLARATION
{
	int i=0;
	char *ptr=str;
	
	do
	{
		*ptr++;
		if(*ptr==' ')		// counting the words
		{
			i++;
		}
		
	}while(*ptr!=NULL);		// condition till last character or null character of string
	i++;


	printf("\n\nTHERE ARE %d WORDS IN A SENTENCE OR STRING:",i);
	
}


