
#include<stdio.h>
int main()
{ 
int y,n,Y,N;
printf("ENTER ANY OPTION \n");
  scanf("\n%c",&y,&Y,&n,&N);
switch (n,y)
{ 
	case 'n':
		printf("DELETE CANCEELLED!");
		break;
		case 'N':
			printf("DELETE CANCEELLED!");
		break;
	case 'y':
		printf("DELETED SUCCESFULLY!");
		break;
		case'Y':
				printf("DELETED SUCCESFULLY!");
		break;
		
	default:
		printf("chosse the right option");
		break;
}}
