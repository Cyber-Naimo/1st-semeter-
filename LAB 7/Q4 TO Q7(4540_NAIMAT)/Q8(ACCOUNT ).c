#include <stdio.h>
#include <string.h>

int
main ()
{
  char ch, lowercase, uppercase;
  char usern1, usern2, usern3, usern4, usern5, us1, us2, us3, us4, us5;
  char pass1, pass2, pass3, pass4, pass5, pass6, ps1, ps2, ps3, ps4, ps5, ps6;

  printf ("=======================================================================================================================\n"
          "\t \t \t *************************** CREATE AN ACCOUNT **************************\n"
          "=======================================================================================================================\n");
          

  printf ("ENTER USER NAME:(NOT MORE THEN FIVE CHARACTERS)\n");
  scanf (" %c%c%c%c%c", &usern1, &usern2, &usern3, &usern4, &usern5);

  printf ("ENTER STRONG PASSWORD:\n ");
  scanf (" %c%c%c%c%c%c", &pass1, &pass2, &pass3, &pass4, &pass5, &pass6);

  
  int digitFound = 0, upperAlphaFound = 0, lowerAlphaFound = 0;

  int x = 0;
  for (x = 1; x <= 6; ++x)
    {
      switch (x)
        {
        case 1:
          if (pass1 >= '0' && pass1 <= '9')
            {
              digitFound = 1;
            };
          break;
        case 2:
          if (pass2 >= '0' && pass2 <= '9')
            {
              digitFound = 1;
            };
          break;
        case 3:
          if (pass3 >= '0' && pass3 <= '9')
            {
              digitFound = 1;
            };
          break;
        case 4:
          if (pass4 >= '0' && pass4 <= '9')
            {
              digitFound = 1;
            };
          break;
        case 5:
          if (pass5 >= '0' && pass5 <= '9')
            {
              digitFound = 1;
            };
          break;
        case 6:
          if (pass6 >= '0' && pass6 <= '9')
            {
              digitFound = 1;
            };
          break;
        }
    }
  for (x = 1; x <= 6; ++x)
    {
      switch (x)
        {
        case 1:
          if (pass1 >= 'a' && pass1 <= 'z')
            {
              lowerAlphaFound = 1;
            };
          break;
        case 2:
          if (pass2 >= 'a' && pass2 <= 'z')
            {
              lowerAlphaFound = 1;
            };
          break;
        case 3:
          if (pass3 >= 'a' && pass3 <= 'z')
            {
              lowerAlphaFound = 1;
            };
          break;
        case 4:
          if (pass4 >= 'a' && pass4 <= 'z')
            {
              lowerAlphaFound = 1;
            };
          break;
        case 5:
          if (pass5 >= 'a' && pass5 <= 'z')
            {
              lowerAlphaFound = 1;
            };
          break;
        case 6:
          if (pass6 >= 'a' && pass6 <= 'z')
            {
              lowerAlphaFound = 1;
            };
          break;
        }
    }
  for (x = 1; x <= 6; ++x)
    {
      switch (x)
        {
        case 1:
          if (pass1 >= 'A' && pass1 <= 'Z')
            {
              upperAlphaFound = 1;
            };
          break;
        case 2:
          if (pass2 >= 'A' && pass2 <= 'Z')
            {
              upperAlphaFound = 1;
            };
          break;
        case 3:
          if (pass3 >= 'A' && pass3 <= 'Z')
            {
              upperAlphaFound = 1;
            };
          break;
        case 4:
          if (pass4 >= 'A' && pass4 <= 'Z')
            {
              upperAlphaFound = 1;
            };
          break;
        case 5:
          if (pass5 >= 'A' && pass5 <= 'Z')
            {
              upperAlphaFound = 1;
            };
          break;
        case 6:
          if (pass6 >= 'A' && pass6 <= 'Z')
            {
              upperAlphaFound = 1;
            };
          break;
        }
    }
    
    if ((digitFound && lowerAlphaFound && upperAlphaFound)) {
    	printf("CONGRULATIONS!!!,ACCOUNT CREATED SECCESSFULLY, NOW YOU CAN LOG  IN \n");
    	
    }
    else 
    {
    	printf("PASSWORD MUST CONTAIN AT LEAST 1 UPPERCASE ,1 LOWECASE AND 1 DIGIT!\nPLEASE TYPE CORRECT PASSWORD!\n");
    	return -1;
	}

  printf ("ENTER YOUR USER NAME :\n");
  scanf (" %c%c%c%c%c", &us1, &us2, &us3, &us4, &us5);
  printf ("ENTER YOUR STRONG PASSWORD:\n");
  scanf (" %c%c%c%c%c%c", &ps1, &ps2, &ps3, &ps4, &ps5, &ps6);

  if ((usern1 == us1 && usern2 == us2 && usern3 == us3 && usern4 == us4 && usern5 == us5)
      && (pass1 == ps1 && pass2 == ps2 && pass3 == ps3 && pass4 == ps4 && pass5 == ps5
          && pass6 == ps6))
    {
      printf ("WELCOME YOU ARE NOW LOGGED IN :\n");
    }
  else
    printf ("WRONG PASSWORD!, PLEASE ENTER YOUR ACCOUNT PASSWORD \n");

  return 0;
}
