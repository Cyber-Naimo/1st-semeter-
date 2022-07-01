#include<stdio.h>
int main(){
		char a,a1,a2,a3,a4;
	printf("ENTER THE FIRST LETTER OF MENU!\n"
				"1) PRESS F FOR FILE!\n"
				"2) PRESS E FOR EDIT!\n"
				"3) PRESS X FOR SEARCH!\n");
	scanf("%c",&a);
	switch(a)
	{
	case 'F':
		printf("NEW\n"
		"OPEN\n"
		 "SAVE\n");
		 scanf(" %c",&a1);
		case 'N':
		printf(" NEW FILE:");		 
		break;	
		case 'O':
			printf("OPEN FILE: ");
			break;
		case 'S':
			printf("SAVE FILE:");
			break;
	
	break;
	
	case 'E':
		printf("PRESS U FOR Undo\n"
		"PRESS R FOR REDO!\n"
		"PRESS C FOR CUT\n COPY\n");
		scanf(" %c",&a2);
		case 'U':
			printf("UNDO!\n");
			break;
		case 'R':
			printf("redo!\n");
			break;
		case 'C':
			printf("CUT\n copy\n");
			break;
		
	break;
	case 'X':
			
	
		printf("PRESS F FOR FIND!\n"
		"FIND PLACE!\n"
		"PRESS R FOR REPLACE!\n");
		scanf("%c",&a2);
		break;
		case 'G':
		printf("FIND\n FIND PLACE:");
		break;
		case 'r':
			printf("REPLACE!\n");
	default:
		printf("ENTER VALID CHARACTER");
		}
		
		
	}
		
