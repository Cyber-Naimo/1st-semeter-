#include<stdio.h>
int main()
{
	char days;
	printf("********ENTER DAY*****\n"
	" M FOR MONDAY\n"
	" T FOR TUESDAY\n"
	" W FORWEDNESDAY\n"
	" X FOR THURSDAY\n"
	" F FORFRIDAY\n"
	" ST FOR SATUARDAY\n"
	" S FOR SUNDAY\n");
	
	scanf("%c", &days);
	
	switch (days)
	{
		case 'M':
				printf("***** I WILL GO TO SCHOOL*****");
				break;
		case 'T':
				printf("***** I WILL GO TO SCHOOL*****");
				break;
		case 'W':
				printf("***** I WILL GO TO SCHOOL*****");
				break;
		case 'X':
				printf("***** I WILL GO TO SCHOOL*****");
				break;
		case 'F':
				printf("***** I WILL GO TO SCHOOL*****");
				break;
		case 'ST':
				printf("***** I WILL PLAY CRICKET*****");
				break;
		case 'S':
				printf("***** I WILL PLAY CRICKET *****");
				break;
		default:
			printf("*********** YOU DID NOT ENTER VALID DAY PLEASE ENTER  VALID DAY ****** ");
	}
}
			
	
	
