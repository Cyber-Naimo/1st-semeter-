#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <windows.h>
#include <time.h>
#include <stdbool.h>

struct doctor // STRUCTURE FOR DOCTOR INFORMATION
{
	char name[100];
	char idcardno[100];
	char gender[100];
	char dob[100];
	char nationality[100];
	char mpnumber[100];
	char qualifications[100];
	char timing[100];
	char roomno[100];
	char hoursinday[100];
	char payrate[100];
};
struct nurse // STRUCTURE FOR NURSE INFORMATION
{
	char name[100];
	char idcardno[100];
	char gender[100];
	char dob[100];
	char nationality[100];
	char mpnumber[100];
	char qualifications[100];
	char timing[100];
	char hoursinday[100];
	char payrate[100];
};
struct surgeon
{
	char name[100];
	char idcardno[100];
	char gender[100];
	char dob[100];
	char nationality[100];
	char mpnumber[100];
	char qualifications[100];
	char specialization[100];
	char timing[100];
	char roomno[100];
	char hoursinday[100];
	char payrate[100];
};
struct patient // STRUCTURE FOR PATIENT INFORMATION OR RECORD
{
	char name[100];
	char fname[100];
	char gender[100];
	char bg[100];
	char age[100];
	char address[100];
	char mpnumber[100];
	char disease[100];
	char doc_name[100];
	char idcardno[100];
};
struct medicine
{
	int id;
	char name[100];
	int quantity;
	int price;
	char info[100];
	char company[100];
	char duedate[100];
	char expirydate[100];
};

struct medicine *m[5]=
{
{1,"PANADOL",5,7,"GOOD FOR HEADACHE","ESPERIO","20/NOVEMBER/2021","20/JUNE/2024"},
{1,"DISPRIN",5,50,"GOOD FOR PAIN PROBLEM","PRIONSH","20/MARCH2021","20/JANUARY/2023"},
{3,"PARACETAMOL",10,90,"GOOD FOR FEVER","MISHALNI","1/DECEMBER/2019","1/DECEMER/2022"},
{4,"AMMOXAL",15,500,"GOOD FOR COUGH PROBLEM","MAHNI","1/FEBUARARY/2003","1/AUGUST/2004"},
{5,"INSULINE",30,150,"GOOD FOR SUGAR PATIENT","KARACHIPRODUCTS","7/MAY,2020","8/JULY/2023"}};

bool searchdoctor(char[], char, char[]);
bool searchnurse(char[], char, char[]);
bool searchsurgeon(char[], char, char[]);
bool searchpatient(char[], char, char[]);
bool searchdoctorsalary(char[], char, char[]);
bool searchnursesalary(char[], char, char[]);
bool searchsurgeonsalary(char[], char, char[]);
bool searchpatientsalary(char[], char, char[]);
void doctorinput(struct doctor[]);
void nurseinput(struct nurse[]);
void surgeoninput(struct surgeon[]);
void patientinput(struct patient[]);


int main() // STARTING OF THE MAIN FUNCTION
{
	time_t t;
	time(&t);

		Beep(250,700);
		Beep(300,700);
		Beep(350,700);
		Beep(250,700);
		Beep(300,700);

	system("COLOR F0");
	printf("\n\n\n\n\n\n\n\t\t\t\t*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*");
	printf("\n\t\t\t\t$\t\t \tWELCOME TO\t\t      $");
	printf("\n\t\t\t\t*\t\tCITY HOSPITAL MANAGEMENT SYSTEM\t\t*");
	printf("\n\t\t\t\t$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$");

	printf("\n\n\nDATE AND TIME:\t%s", ctime(&t)); // PRINTING CURRENT DATE AND TIME
	printf("\n\n\n\n\n PRESS ANY KEY TO CONTINUE......\n");
	getch();
	system("cls");

	FILE *fpd, *fpn, *fps, *fpp;
	int z, y, x, i, k, c;
	struct doctor Ddata[100]; // CALLING OUT STRUCTURE
	struct surgeon Sdata[100];
	struct nurse Ndata[100];
	struct patient Pdata[100];
	char Hrs[3], Pay[7];
	int counter = 0, loop, quit = -1, found, count2, count3, sal, hrs, pay;
	char filestring[200];
	char searchname[100];
	char searchid[25];
	char searchmp[25];
	char Username[15];
	char Password[15];
	char original_Username[10] = {"NAIMO"}; // LOGIN INFORMATION
	char original_Password[11] = {"****"};
	char boolean = 'f';
	do
	{
		printf("\n\n\t\t----------------------------------------------------------------------------------");
		printf("\n\t\t\t\t      CITY  HOSPITAL         ");
		printf("\n\t\t----------------------------------------------------------------------------------");
		printf("\n\n\n\n\t\t\t\tENTER YOUR USER NAME AND PASSWORD:)\n");
		printf("\n\n\n\t\t\t\t\tUSERNAME:");
		scanf("%s", &Username);
		printf("\n\n\t\t\t\t\tPASSWORD:");
		scanf("%s", &Password);
		if ((strcmp(Username, original_Username) == 0) && (strcmp(Password, original_Password) == 0)) // LOG IN  CONDITION
		{
			printf("WELCOME TO EDHI HOSPITAL:\n");
			printf("\n\n\n\t\t\t\t\t...LOG IN SUCCESSFUL...");
			boolean = 't';
			system("cls");
			cycle:
		
			printf("\n\n\n\n\t\t\tPRESS 1 IF YOU WANT TO KNOW ABOUT PROGRAM\n");
			printf("\n\n\t\t\tPRESS 2 IF YOU WANT TO VIEW THE PHARMACY STORE INFORMATION\n");	
			printf("\n\n\t\t\tPRESS 3 IF YOU WANT TO ENTER DATA\n");
			printf("\n\n\t\t\tPRESS 4 IF YOU WANT TO RETRIEVE DATA\n");
			printf("\n\n\t\t\tPRESS 5 IF YOU WANT TO CALCULATE SALARY\n");
			printf("\n\n\t\t\tPRESS 6 FOR EXIT:");
			printf("\n\n\n\t\t\tENTER YOUR CHOICE:\t");	
			scanf("%d", &z);
			system("cls");
			// ENTER DATA
			if(z==1)
			{
				system("cls");
				
				printf("\n\n\n\t\t\tABOUT\n");
				printf("\n\n\n\t\t\tCITY HOSPITAL MANAGEMENT SYSTEM\n");
				printf("THIS HOSPITAL MANAGEMENT SYSTEM IS MADE BY\nABRAR KHAN\nHITESH\nSAFWAN MOHSIN\nMUHAMMAD NAIMATULLAH KHAN\n");
				printf("HOSPITAL MANAGEMENT SYSTEM IS A COMPUTER SYSTEM THAT HELPS MANAGE THE INFORMATION RELATED TO HEALTH CARE\n");
				printf("AND AIDS IN THE JOB COMPLETION OF HEALTH CARE PROVIDERS EFFECTIVELY\n");
				printf("CREDIT GOES TO OUR TEACHERS\n\nMISS MURK MARVI\nMISS SANDIA KUMARI\nMISS AQSA ZAHID");
				
				goto cycle;
				
			}
			else if(z == 2)
			{
				system("cls");
				int flag=0;
				char med[50];
				printf("\n\nENTER MEDICINE NAME: ");
				scanf("%s",med);
					
				for(i=0;i<5;i++)
				{
						
					if(strcmpi(m[i]->name,med)==0)
						{
							printf("\nTHIS MEDICINE IS AVAILABLE IN PHARMACY STORE AND ITS INFO IS GIVEN BELOW:\n");
							printf("\nMEDICINE NAME=%s\nPRICE=%d\nAVAILABLE QUANTITY=%d\nCOMPANY=%s\nMfg_Date=%s\nExp_Date=%s\n\n",m[i]->name,m[i]->price,m[i]->quantity,m[i]->company,m[i]->duedate,m[i]->expirydate);
							getch();
							break;
						}
					else
						{
							flag=1;
						}
					
				}
					if(flag==1)
					{
					printf("\nTHIS MEDICINE IS NOT AVAILABLE IN THE PHARMACY STORE.\n");
					getch();
					}
				system("cls");
				goto cycle;	
			}
			else if (z == 3)
			{

				system("cls");
				printf("\n\t\t\tPRESS 1 IF YOU WANT TO ENTER THE DATA OF THE STAFF\n");
				printf("\n\t\t\tPRESS 2 IF YOU WANT TO ENTER THE DATA OF THE PATIENTS\n");
				scanf("%d", &y);
				if (y == 1)
				{
					do
					{
						fflush(stdin);

						system("cls");
						printf("\n\t\t\tSELECT A CATEGORY WHOSE DATA YOU WANT TO ENTER\n");
						printf("\n\t\t\t1:DOCTORS \n");
						printf("\n\t\t\t2:NURSES \n");
						printf("\n\t\t\t3:SURGEONS\n");
						scanf("%d", &x);
						switch (x)
						{
						case 1:
						{
							doctorinput(Ddata);
					
							goto cycle;
							break;
						}
						case 2:
						{
							nurseinput(Ndata);
							
							goto cycle;
							break;
						}

						case 3:
						{
							surgeoninput(Sdata);
							goto cycle;
							break;
						}
						default:
						{

							system("cls");
							Beep(750, 800);
							printf("\n\t\t\tERROR! WRONG NUMBER ENTERED!! TERMINATING THE PROGRAM!!!\n");
							printf("\n\t\t\tYOU CANNOT LOGIN NOW RESTART THE SOFTWARE TO LOGIN AGAIN !!!!!\n");
							printf("\n\t\t\tPRESS ANY KEY TO EXIT");
							getch();
							exit(1);
						}
						}
						printf("\n\t\t\tDO YOU WANT TO ENTER DATA OF ANOTHER CATEGORY \n");
						printf("\n\t\t\t1:YES \n"); // FOR MORE DATA INPUT
						printf("\n\t\t\t2:NO \n");
						scanf("%d", &k);
					} while (k != 2);
				}

				else if (y == 2)

				{
					patientinput(Pdata);
					goto cycle;
				}
			}
			// RETRIVE DATA


			else if (z == 4)
			{
				system("cls");
				printf("\n\t\t\tPRESS 1 TO RETRIEVE DATA OF DOCTORS\n");
				printf("\n\t\t\tPRESS 2 TO RETRIEVE DATA OF NURSES\n");
				printf("\n\t\t\tPRESS 3 TO RETRIEVE DATA OF SURGEONS\n");
				printf("\n\t\t\tPRESS 4 TO RETRIEVE DATA OF PATIENTS\n");
				scanf("%d", &y);
				printf("\n\t\t\tPRESS 1 TO RETRIEVE USING NAME\n");
				printf("\n\t\t\tPRESS 2 TO RETRIEVE USING ID CARD NUMBER\n"); // SEARCHING PROGRAM
				printf("\n\t\t\tPRESS 3 TO RETRIEVE USING MOBILE NUMBER\n");
				scanf("%d", &x);
				for (loop = 0; loop < 25; loop++)
				{
					searchname[loop] = '\0';
					searchid[loop] = '\0'; // SEARCHING THROUGH FILINHG
					searchmp[loop] = '\0';
				}
				// search doctor
				if (y == 1)
				{
					system("cls");
					if (x == 1)
					{
						system("cls");
					
						printf("\n\t\t\tENTER NAME TO SEARCH: ");
						scanf("%s", &searchname);
						found = 0;
						fpd = fopen("Doctors.txt", "r");
						while (fgets(filestring, 150, fpd) != NULL) // CONDITION FOR SEARCHING THROUGH FILING
						{
							bool var = searchdoctor(searchname, 'n', filestring);
							if (var)
							{
								found = 1;
							}
						}
						fclose(fpd);

						if (found == 0)
						{
							system("cls");
							system("color c7 ");
							Beep(750, 800);
							printf("\n\t\t\t\nError 404: DATA NOT FOUND...");
							getch();
						}
						system("cls");
						goto cycle;
					}
					else if (x == 2)
					{
						system("cls");
						printf("\n\t\t\tENTER ID CARD NUMBER TO SEARCH: ");
						scanf("%s", &searchid);
						found = 0;
						fpd = fopen("Doctors.txt", "r");			// FROM FILING OPENING OR READ DOCTORS DATA
						while (fgets(filestring, 150, fpd) != NULL) // CONDITION FOR SEARCHING THROUGH FILING
						{
							bool var = searchdoctor(searchid, 'i', filestring);
							if (var)
							{
								found = 1;
								break;
							}
						}
						fclose(fpd);

						if (found == 0)
						{
							system("cls");
							system("color c7 ");
							Beep(750, 800);
							printf("\n\t\t\t\nError 404: DATA NOT FOUND...");
							getch();
						}
						system("cls");
						goto cycle;
					}
					else if (x == 3)
					{
						system("cls");
						printf("\n\t\t\tENTER MOBILE NUMBER TO SEARCH: ");
						scanf("%s", &searchmp); // SEARCHING THROGH MOBILE NUMBER
						found = 0;
						fpd = fopen("Doctors.txt", "r"); // OPEING DOCTOR INFORMATION

						while (fgets(filestring, 150, fpd) != NULL) // CONDITION FOR SEARCHING THROUGH FILING
						{
							bool var = searchdoctor(searchmp, 'm', filestring);
							if (var)
							{
								found = 1;
								break;
							}
						}
						fclose(fpd);

						if (found == 0)
						{
							system("cls");
							system("color c7 ");
							Beep(750, 800);
							printf("\n\t\t\t\nError 404: DATA NOT FOUND...");
							getch();
						}
						system("cls");
						goto cycle;
						fclose(fpd);
						if (found == 0)
						{

							system("cls");
							system("color c7 ");
							Beep(750, 2000);
							printf("\n\t\t\t\nERROR! 404: DATA NOT FOUND...");
							getch();
							goto cycle;
						}
					}
				}
				else if (y == 2) // RETREIVING DATA FOR NURSES
				{
					system("cls");
					if (x == 1)
					{
						system("cls");
						printf("\n\t\t\tENTER NAME TO SEARCH: ");
						scanf("%s", &searchname);
						found = 0;
						fpn = fopen("Nurses.txt", "r");				// USAGE OF FILING
						while (fgets(filestring, 150, fpn) != NULL) // CONDITION FOR SEARCHING THROUGH FILING
						{
							bool var = searchnurse(searchname, 'n', filestring);
							if (var)
							{
								found = 1;
							}
						}
						fclose(fpn);

						if (found == 0)
						{
							system("cls");
							system("color c7 ");
							Beep(750, 800);
							printf("\n\t\t\t\nError 404: DATA NOT FOUND...");
							getch();
						}
						system("cls");
						goto cycle;
					}
					else if (x == 2)
					{
						system("cls");
						printf("\n\t\t\tENTER ID CARD NUMBER TO SEARCH: ");
						scanf("%s", &searchid);
						found = 0;
						fpn = fopen("Nurses.txt", "r");
						while (fgets(filestring, 150, fpn) != NULL) // CONDITION FOR SEARCHING THROUGH FILING
						{
							bool var = searchnurse(searchid, 'i', filestring);
							if (var)
							{
								found = 1;
							}
						}
						fclose(fpn);

						if (found == 0)
						{
							system("cls");
							system("color c7 ");
							Beep(750, 800);
							printf("\n\t\t\t\nError 404: DATA NOT FOUND...");
							getch();
						}
						system("cls");
						goto cycle;
					}
					else if (x == 3)
					{
						system("cls");
						printf("\n\t\t\tENTER MOBILE NUMBER TO SEARCH: ");
						scanf("%s", &searchmp);
						found = 0;
						fpn = fopen("Nurses.txt", "r");
						while (fgets(filestring, 150, fpn) != NULL) // CONDITION FOR SEARCHING THROUGH FILING
						{
							bool var = searchnurse(searchmp, 'm', filestring);
							if (var)
							{
								found = 1;
							}
						}
						fclose(fpn);

						if (found == 0)
						{
							system("cls");
							system("color c7 ");
							Beep(750, 800);
							printf("\n\t\t\t\nError 404: DATA NOT FOUND...");
							getch();
						}
						system("cls");
						goto cycle;
					}
			}
					else if (y == 3) // retrieving   data for surgeons
					{
						system("cls");
						if (x == 1)
						{
							system("cls");
							printf("\n\t\t\tENTER NAME TO SEARCH: ");
							scanf("%s", &searchname);

							found = 0;
							fps = fopen("Surgeons.txt", "r");			// opeining file
							while (fgets(filestring, 150, fps) != NULL) // CONDITION FOR SEARCHING THROUGH FILING
							{
								bool var = searchsurgeon(searchname, 'n', filestring);
								if (var)
								{
									found = 1;
								}
							}
							fclose(fps);

							if (found == 0)
							{
								system("cls");
								system("color c7 ");
								Beep(750, 800);
								printf("\n\t\t\t\nError 404: DATA NOT FOUND...");
								getch();
							}
							system("cls");
							goto cycle;
						}
						else if (x == 2)
						{
							system("cls");
							printf("\n\t\t\tENTER ID CARD NUMBER TO SEARCH: ");
							scanf("%s", &searchid);
							found = 0;
							fps = fopen("Surgeons.txt", "r");
							while (fgets(filestring, 150, fps) != NULL) // CONDITION FOR SEARCHING THROUGH FILING
							{
								bool var = searchsurgeon(searchid, 'i', filestring);
								if (var)
								{
									found = 1;
								}
							}
							fclose(fps);

							if (found == 0)
							{
								system("cls");
								system("color c7 ");
								Beep(750, 800);
								printf("\n\t\t\t\nError 404: DATA NOT FOUND...");
								getch();
							}
							system("cls");
							goto cycle;
						}
						else if (x == 3)
						{
							system("cls");
							printf("\n\t\t\tENTER MOBILE NUMBER TO SEARCH: ");
							scanf("%s", &searchmp);
							found = 0;
							fps = fopen("Surgeons.txt", "r");
							while (fgets(filestring, 150, fps) != NULL) // CONDITION FOR SEARCHING THROUGH FILING
							{
								bool var = searchsurgeon(searchmp, 'm', filestring);
								if (var)
								{
									found = 1;
								}
							}
							fclose(fps);

							if (found == 0)
							{
								system("cls");
								system("color c7 ");
								Beep(750, 800);
								printf("\n\t\t\t\nError 404: DATA NOT FOUND...");
								getch();
							}
							system("cls");
							goto cycle;
						}
				}
						else if (y == 4) //RETERIEVING DATA OF PATIENTS
						{
							system("cls");
							if (x == 1)
							{
								system("cls");
								printf("\n\t\t\tENTER NAME TO SEARCH: ");
								scanf("%s", &searchname);
								found = 0;
								fpp = fopen("Patients.txt", "r");			// OPEININGFILE
								while (fgets(filestring, 150, fpp) != NULL) // CONDITION FOR SEARCHING THROUGH FILING
								{
									bool var = searchpatient(searchname, 'n', filestring);
									if (var)
									{
										found = 1;
									}
								}
								fclose(fpp);

								if (found == 0)
								{
									system("cls");
									system("color c7 ");
									Beep(750, 800);
									printf("\n\t\t\t\nError 404: DATA NOT FOUND...");
									getch();
								}
								system("cls");
								goto cycle;
							}
							else if (x == 2)
							{
								system("cls");
								printf("\n\t\t\tENTER ID CARD NUMBER TO SEARCH: ");
								scanf("%s", &searchid);
								found = 0;
								fpp = fopen("Patients.txt", "r");
								while (fgets(filestring, 150, fpp) != NULL) // CONDITION FOR SEARCHING THROUGH FILING
								{
									bool var = searchpatient(searchid, 'i', filestring);
									if (var)
									{
										found = 1;
									}
								}
								fclose(fpp);

								if (found == 0)
								{
									system("cls");
									system("color c7 ");
									Beep(750, 800);
									printf("\n\t\t\t\nError 404: DATA NOT FOUND...");
									getch();
								}
								system("cls");
								goto cycle;
							}
							else if (x == 3)
							{
								system("cls");
								printf("\n\t\t\tENTER MOBILE NUMBER TO SEARCH: ");
								scanf("%s", &searchmp);
								found = 0;
								fpp = fopen("Patients.txt", "r");
								while (fgets(filestring, 150, fpp) != NULL) // CONDITION FOR SEARCHING THROUGH FILING
								{
									bool var = searchpatient(searchmp, 'm', filestring);
									if (var)
									{
										found = 1;
									}
								}
								fclose(fpp);

								if (found == 0)
								{
									system("cls");
									system("color c7 ");
									Beep(750, 800);
									printf("\n\t\t\t\nError 404: DATA NOT FOUND...");
									getch();
								}
								system("cls");
								goto cycle;
							}
						}
				}
	









					else if (z == 5)
					{
						//salary
						system("cls");
						printf("\nPRESS 1 TO CALCULATE SALARY OF DOCTORS\n");
						printf("PRESS 2 TO CALCULATE SALARY OF NURSES\n");
						printf("PRESS 3 TO CALCULATE SALARY OF SURGEONS\n");
						scanf("%d", &y);
						printf("PRESS 1 TO CALCULATE SALARY USING NAME\n");
						printf("PRESS 2 TO CALCULATE SALARY USING ID CARD NUMBER\n");
						printf("PRESS 3 TO CALCULATE SALARY USING MOBILE NUMBER\n");
						fflush(stdin);
						scanf("%d", &x);
						for (loop = 0; loop < 25; loop++)
						{
							searchname[loop] = '\0';
							searchid[loop] = '\0';
							searchmp[loop] = '\0';
						}
						if (y == 1)
						{
							if (x == 1)
							{
								system("cls");
								printf("ENTER NAME TO SEARCH: ");
								scanf("%s", &searchname);
								found = 0;
								fpd = fopen("Doctors.txt", "r");
								while (fgets(filestring, 150, fpd) != NULL) // CONDITION FOR SEARCHING THROUGH FILING
								{
									bool var = searchdoctorsalary(searchname, 'n', filestring);
									if (var)
									{
										found = 1;
									}
								}
								fclose(fpd);

								if (found == 0)
								{
									system("cls");
									system("color c7 ");
									Beep(750, 800);
									printf("\n\t\t\t\nError 404: DATA NOT FOUND...");
									getch();
								}
								system("cls");
								goto cycle;
							}
							else if (x == 2)
							{
								system("cls");
								printf("ENTER ID CARD NUMBER TO SEARCH: ");
								scanf("%s", &searchid);
								found = 0;
								fpd = fopen("Doctors.txt", "r");
								while (fgets(filestring, 150, fpd) != NULL) // CONDITION FOR SEARCHING THROUGH FILING
								{
									bool var = searchdoctorsalary(searchid, 'i', filestring);
									if (var)
									{
										found = 1;
									}
								}
								fclose(fpd);

								if (found == 0)
								{
									system("cls");
									system("color c7 ");
									Beep(750, 800);
									printf("\n\t\t\t\nError 404: DATA NOT FOUND...");
									getch();
								}
								system("cls");
								goto cycle;
							}
							else if (x == 3)
							{
								system("cls");
								printf("ENTER MOBILE NUMBER TO SEARCH: ");
								scanf("%s", &searchmp);
								found = 0;
								fpd = fopen("Doctors.txt", "r");
								while (fgets(filestring, 150, fpd) != NULL) // CONDITION FOR SEARCHING THROUGH FILING
								{
									bool var = searchdoctorsalary(searchmp, 'm', filestring);
									if (var)
									{
										found = 1;
									}
								}
								fclose(fpd);

								if (found == 0)
								{
									system("cls");
									system("color c7 ");
									Beep(750, 800);
									printf("\n\t\t\t\nError 404: DATA NOT FOUND...");
									getch();
								}
								system("cls");
								goto cycle;
							}
						}
						else if (y == 2)
						{
							if (x == 1)
							{
								system("cls");
								printf("ENTER NAME TO SEARCH: ");
								scanf("%s", &searchname);
								found = 0;
								fpn = fopen("Nurses.txt", "r");				// opening nurse file
								while (fgets(filestring, 150, fpn) != NULL) // CONDITION FOR SEARCHING THROUGH FILING
								{
									bool var = searchnursesalary(searchname, 'n', filestring);
									if (var)
									{
										found = 1;
									}
								}
								fclose(fpn);

								if (found == 0)
								{
									system("cls");
									system("color c7 ");
									Beep(750, 800);
									printf("\n\t\t\t\nError 404: DATA NOT FOUND...");
									getch();
								}
								system("cls");
								goto cycle;
							}
							else if (x == 2)
							{
								printf("ENTER ID CARD NUMBER TO SEARCH: ");
								scanf("%s", &searchid);
								found = 0;
								fpn = fopen("Nurses.txt", "r");				// OPENING NURSE FILE
								while (fgets(filestring, 150, fpn) != NULL) // CONDITION FOR SEARCHING THROUGH FILING
								{
									bool var = searchnursesalary(searchid, 'i', filestring);
									if (var)
									{
										found = 1;
									}
								}
								fclose(fpn);

								if (found == 0)
								{
									system("cls");
									system("color c7 ");
									Beep(750, 800);
									printf("\n\t\t\t\nError 404: DATA NOT FOUND...");
									getch();
								}
								system("cls");
								goto cycle;
							}
							else if (x == 3)
							{
								system("cls");
								printf("ENTER MOBILE NUMBER TO SEARCH: ");
								scanf("%s", &searchmp);
								found = 0;
								fpn = fopen("Nurses.txt", "r");
								while (fgets(filestring, 150, fpn) != NULL) // CONDITION FOR SEARCHING THROUGH FILING
								{
									bool var = searchnursesalary(searchmp, 'm', filestring);
									if (var)
									{
										found = 1;
									}
								}
								fclose(fpn);

								if (found == 0)
								{
									system("cls");
									system("color c7 ");
									Beep(750, 800);
									printf("\n\t\t\t\nError 404: DATA NOT FOUND...");
									getch();
								}
								system("cls");
								goto cycle;
							}
						}
						else if (y == 3)
						{
							if (x == 1)
							{
								system("cls");
								printf("ENTER NAME TO SEARCH: ");
								scanf("%s", &searchname);
								found = 0;
								fps = fopen("Surgeons.txt", "r");			// OPENING SURGEOS FILE
								while (fgets(filestring, 150, fps) != NULL) // CONDITION FOR SEARCHING THROUGH FILING
								{
									bool var = searchsurgeonsalary(searchname, 'n', filestring);
									if (var)
									{
										found = 1;
									}
								}
								fclose(fps);

								if (found == 0)
								{
									system("cls");
									system("color c7 ");
									Beep(750, 800);
									printf("\n\t\t\t\nError 404: DATA NOT FOUND...");
									getch();
								}
								system("cls");
								goto cycle;
							}
							else if (x == 2)
							{
								system("cls");
								printf("ENTER ID CARD NUMBER TO SEARCH: ");
								scanf("%s", &searchid);
								found = 0;
								fps = fopen("Surgeons.txt", "r");
								while (fgets(filestring, 150, fps) != NULL) // CONDITION FOR SEARCHING THROUGH FILING
								{
									bool var = searchsurgeonsalary(searchid, 'i', filestring);
									if (var)
									{
										found = 1;
									}
								}
								fclose(fps);

								if (found == 0)
								{
									system("cls");
									system("color c7 ");
									Beep(750, 800);
									printf("\n\t\t\t\nError 404: DATA NOT FOUND...");
									getch();
								}
								system("cls");
								goto cycle;
							}
							else if (x == 3)
							{
								system("cls");
								printf("ENTER MOBILE NUMBER TO SEARCH: ");
								scanf("%s", &searchmp);
								found = 0;
								fps = fopen("Surgeons.txt", "r");
								while (fgets(filestring, 150, fps) != NULL) // CONDITION FOR SEARCHING THROUGH FILING
								{
									bool var = searchsurgeonsalary(searchmp, 'm', filestring);
									if (var)
									{
										found = 1;
									}
								}
								fclose(fps);

								if (found == 0)
								{
									system("cls");
									system("color c7 ");
									Beep(750, 800);
									printf("\n\t\t\t\nError 404: DATA NOT FOUND...");
									getch();
								}
								system("cls");
								goto cycle;
							}
						}
					}
				else if (z==6)
				{
					system("cls");
					system("cls c7");
					printf("\n\n\t\t\tTHANK YOU  FOR USING OUR PROGRAM");
					exit(1);
				}
				
			



			}
			else
			{
				Beep(750, 3000);
				printf("\n\t\t\t\n\t\t\tINCORRECT PASSWORD! ( PLEASE TRY AGAIN :)"); // INCORRECT PASSWORD MESSAGE
				counter++;
				getch();
			}
		
	

	} while ((counter <= 2) && (boolean == 'f')); //MULTILPLE ATTEMPTS CONDITION FOR PASSWORD
	if (counter > 2)
	{
		for (i = 0; i < 100; i++)
		{
			system("cls");
			printf("\n\t\t\t\n\n\n\t\n\n\n\t\n\n\n\n\n\n\n\n\t\t   !!!!! MULTIPLE LOGIN ATTEMPTS DETECTED, RESTART THE PROGRAM AND LOGIN AGAIN !!!!!");
			system("color 1F");
			Sleep(1);
			system("color 4F");

			Sleep(1);
		}
	}
}




void doctorinput(struct doctor Ddata[])
{
	int n, i, loop;
	FILE *fpd, *fpn, *fps, *fpp;
	char filestring[200];

	system("cls");
	printf("\n\t\t\tENTER THE NUMBER OF DOCTORS\n");
	scanf("%d", &n);

	system("cls");
	for (i = 1; i <= n; i++)
	{

		printf("\n\t\t\tENTER THE NAME OF DOCTOR NUMBER %d\n", i);
		scanf("%s", &Ddata[i].name);
		printf("\n\t\t\tENTER THE ID CARD NUMBER OF DOCTOR NUMBER %d\n", i);
		scanf("%s", &Ddata[i].idcardno);
		printf("\n\t\t\tENTER THE GENDER OF DOCTOR NUMBER %d\n", i);
		scanf("%s", &Ddata[i].gender);
		printf("\n\t\t\tENTER THE DATE OF BIRTH OF DOCTOR NUMBER %d\n", i);
		scanf("%s", &Ddata[i].dob);
		printf("\n\t\t\tENTER THE NATIONALITY OF DOCTOR NUMBER %d\n", i);
		scanf("%s", &Ddata[i].nationality);
		printf("\n\t\t\tENTER THE MOBILE PHONE NUMBER OF DOCTOR NUMBER %d\n", i);
		scanf("%s", &Ddata[i].mpnumber);
		printf("\n\t\t\tENTER THE QUALIFICATIONS OF DOCTOR NUMBER %d\n", i);
		scanf("%s", &Ddata[i].qualifications);
		printf("\n\t\t\tENTER THE TIMING OF DOCTOR NUMBER %d\n", i);
		scanf("%s", &Ddata[i].timing);
		printf("\n\t\t\tENTER THE ROOM NUMBER OF DOCTOR NUMBER %d\n", i);
		scanf("%s", &Ddata[i].roomno);
		printf("\n\t\t\tENTER THE NUMBER OF HOURS WORKED IN A DAY BY DOCTOR NUMBER %d\n", i);
		scanf("%s", &Ddata[i].hoursinday);
		printf("\n\t\t\tENTER THE PAY RATE DOCTOR NUMBER %d\n", i);
		scanf(" %s", &Ddata[i].payrate);
		for (loop = 0; loop < 200; loop++)
		{
			filestring[loop] = '\0'; //USING FILING
		}
		strcat(filestring, "#");
		strcat(filestring, Ddata[i].name);
		strcat(filestring, "#");
		strcat(filestring, Ddata[i].idcardno);
		strcat(filestring, "#");
		strcat(filestring, Ddata[i].gender);
		strcat(filestring, "#");
		strcat(filestring, Ddata[i].dob);
		strcat(filestring, "#");
		strcat(filestring, Ddata[i].nationality); // FILING RECORD
		strcat(filestring, "#");
		strcat(filestring, Ddata[i].mpnumber);
		strcat(filestring, "#");
		strcat(filestring, Ddata[i].qualifications);
		strcat(filestring, "#");
		strcat(filestring, Ddata[i].timing);
		strcat(filestring, "#");
		strcat(filestring, Ddata[i].roomno);
		strcat(filestring, "#");
		strcat(filestring, Ddata[i].hoursinday);
		strcat(filestring, "#");
		strcat(filestring, Ddata[i].payrate);
		
		fpd = fopen("Doctors.txt", "a");
		fputs(filestring, fpd);
		fprintf(fpd, "%s", "\n");
		fclose(fpd);
		fpd = NULL;
	}
	printf("\n\n\n\t\t\t\tDATA INPUT SUCESSFULL\n\n\n");
	getch();
	system("cls");
}

void nurseinput(struct nurse Ndata[])
{
	int n, i, loop;
	FILE *fpd, *fpn, *fps, *fpp;
	char filestring[200];
	system("cls");

	printf("\n\t\t\tENTER THE NUMBER OF NURSES\n");
	scanf("%d", &n);

	for (i = 1; i <= n; i++)
	{
		printf("\n\t\t\tENTER THE NAME OF NURSE NUMBER %d\n", i);
		scanf("%s", &Ndata[i].name);
		printf("\n\t\t\tENTER THE ID CARD NUMBER OF NURSE NUMBER %d\n", i);
		scanf("%s", &Ndata[i].idcardno);
		printf("\n\t\t\tENTER THE GENDER OF NURSE NUMBER %d\n", i);
		scanf("%s", &Ndata[i].gender);
		printf("\n\t\t\tENTER THE DATE OF BIRTH OF NURSE NUMBER %d\n", i);
		scanf("%s", &Ndata[i].dob);
		printf("\n\t\t\tENTER THE NATIONALITY OF NURSE NUMBER %d\n", i);
		scanf("%s", &Ndata[i].nationality);
		printf("\n\t\t\tENTER THE MOBILE PHONE NUMBER OF NURSE NUMBER %d\n", i);
		scanf("%s", &Ndata[i].mpnumber);
		printf("\n\t\t\tENTER THE QUALIFICATIONS OF NURSE NUMBER %d\n", i);
		scanf("%s", &Ndata[i].qualifications);
		printf("\n\t\t\tENTER THE TIMING OF NURSE NUMBER %d\n", i);
		scanf("%s", &Ndata[i].timing);
		printf("\n\t\t\tENTER THE NUMBER OF HOURS WORKED IN A DAY BY NURSE NUMBER %d\n", i);
		scanf("%s", &Ndata[i].hoursinday);
		fflush(stdin);
		printf("\n\t\t\tENTER THE PAY RATE NURSE NUMBER %d\n", i);
		scanf("%s", &Ndata[i].payrate);
		for (loop = 0; loop < 200; loop++)
		{
			filestring[loop] = '\0'; // FILING USAGE
		}
		strcat(filestring, "#");
		strcat(filestring, Ndata[i].name);
		strcat(filestring, "#");
		strcat(filestring, Ndata[i].idcardno);
		strcat(filestring, "#");
		strcat(filestring, Ndata[i].gender);
		strcat(filestring, "#");
		strcat(filestring, Ndata[i].dob);
		strcat(filestring, "#");
		strcat(filestring, Ndata[i].nationality); // SAVING RECORD USING FILING
		strcat(filestring, "#");
		strcat(filestring, Ndata[i].mpnumber);
		strcat(filestring, "#");
		strcat(filestring, Ndata[i].qualifications);
		strcat(filestring, "#");
		strcat(filestring, Ndata[i].timing);
		strcat(filestring, "#");
		strcat(filestring, Ndata[i].hoursinday);
		strcat(filestring, "#");
		strcat(filestring, Ndata[i].payrate);
		
		fpn = fopen("Nurses.txt", "a");
		fputs(filestring, fpn);
		fprintf(fpn, "%s", "\n");
		fclose(fpn);
		fpn = NULL;
	}
	printf("\n\n\n\t\t\t\tDATA INPUT SUCESSFULL\n\n\n");
	getch();
	system("cls");
}

void surgeoninput(struct surgeon Sdata[])
{
	int n, i, loop;
	FILE *fpd, *fpn, *fps, *fpp;
	char filestring[200];

	system("cls");

	printf("\n\t\t\tENTER THE NUMBER OF SURGEON\n");
	scanf("%d", &n);

	system("cls");
	for (i = 1; i <= n; i++) // RECORD FOR SURGEON
	{
		printf("\n\t\t\tENTER THE NAME OF SURGEON NUMBER %d\n", i);
		scanf("%s", &Sdata[i].name);
		printf("\n\t\t\tENTER THE ID CARD NUMBER OF SURGEON NUMBER %d\n", i);
		scanf("%s", &Sdata[i].idcardno);
		printf("\n\t\t\tENTER THE GENDER OF SURGEON NUMBER %d\n", i);
		scanf("%s", &Sdata[i].gender);
		printf("\n\t\t\tENTER THE DATE OF BIRTH OF SURGEON NUMBER %d\n", i);
		scanf("%s", &Sdata[i].dob);
		printf("\n\t\t\tENTER THE NATIONALLITY OF SURGEON NUMBER %d\n", i);
		scanf("%s", &Sdata[i].nationality);
		printf("\n\t\t\tENTER THE MOBILE PHONE NUMBER OF SURGEON NUMBER %d\n", i);
		scanf("%s", &Sdata[i].mpnumber);
		printf("\n\t\t\tENTER THE QUALIFICATIONS OF SURGEON NUMBER %d\n", i);
		scanf("%s", &Sdata[i].qualifications);
		printf("\n\t\t\tENTER THE SPECIALIZATION OF SURGEON NUMBER %d\n", i);
		scanf("%s", &Sdata[i].specialization);
		printf("\n\t\t\tENTER THE TIMING OF SURGEON NUMBER %d\n", i);
		scanf("%s", &Sdata[i].timing);
		printf("\n\t\t\tENTER THE ROOM NUMBER OF SURGEON NUMBER %d\n", i);
		scanf("%s", &Sdata[i].roomno);
		printf("\n\t\t\tENTER THE NUMBER OF HOURS WORKED IN A DAY BY SURGEON NUMBER %d\n", i);
		scanf("%s", &Sdata[i].hoursinday);
		printf("\n\t\t\tENTER THE PAY RATE SURGEON NUMBER %d\n", i);
		scanf("%s", &Sdata[i].payrate);
		for (loop = 0; loop < 200; loop++)
		{
			filestring[loop] = '\0'; // FILING
		}
		strcat(filestring, "#");
		strcat(filestring, Sdata[i].name);
		strcat(filestring, "#");
		strcat(filestring, Sdata[i].idcardno);
		strcat(filestring, "#");
		strcat(filestring, Sdata[i].gender);
		strcat(filestring, "#");
		strcat(filestring, Sdata[i].dob);
		strcat(filestring, "#");
		strcat(filestring, Sdata[i].nationality);
		strcat(filestring, "#");
		strcat(filestring, Sdata[i].mpnumber);
		strcat(filestring, "#");
		strcat(filestring, Sdata[i].qualifications);
		strcat(filestring, "#");
		strcat(filestring, Sdata[i].specialization);
		strcat(filestring, "#");
		strcat(filestring, Sdata[i].timing);
		strcat(filestring, "#");
		strcat(filestring, Sdata[i].roomno);
		strcat(filestring, "#");
		strcat(filestring, Sdata[i].hoursinday);
		strcat(filestring, "#");
		strcat(filestring, Sdata[i].payrate);
	
		fps = fopen("Surgeons.txt", "a");
		fputs(filestring, fps);
		fprintf(fps, "%s", "\n");
		fclose(fps);
		fps = NULL;
	}
	printf("\n\n\n\t\t\t\tDATA INPUT SUCESSFULL\n\n\n");
	getch();
	system("cls");
}

void patientinput(struct patient Pdata[])
{
	int i, loop;
	FILE *fpd, *fpn, *fps, *fpp;
	char filestring[200];
	int n;
	printf("\n\t\t\t\nENTER THE NUMBER OF PATIENTS\n");
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		printf("\n\t\t\tENTER THE ID CARD NUMBER OF PATIENT NUMBER %d\n", i);
		scanf("%s", &Pdata[i].idcardno);
		printf("\n\t\t\tENTER THE NAME OF PATIENT NUMBER %d\n", i);
		scanf("%s", &Pdata[i].name);
		printf("\n\t\t\tENTER THE NAME OF GUARDIAN FOR PATIENT NUMBER %d\n", i);
		scanf("%s", &Pdata[i].fname);
		printf("\n\t\t\tENTER THE GENDER OF PATIENT NUMBER %d\n", i);
		scanf("%s", &Pdata[i].gender);
		printf("\n\t\t\tENTER THE BLOOD GROUP OF PATIENT NUMBER %d\n", i);
		scanf("%s", &Pdata[i].bg);
		printf("\n\t\t\tENTER THE AGE OF PATIENT NUMBER %d\n", i);
		scanf("%s", &Pdata[i].age);
		printf("\n\t\t\tENTER THE ADDRESS OF PATIENT NUMBER %d\n", i);
		scanf("%s", &Pdata[i].address);
		printf("\n\t\t\tENTER THE MOBILE NUMBER OF PATIENT NUMBER %d\n", i);
		scanf("%s", &Pdata[i].mpnumber);
		printf("\n\t\t\tENTER THE DISEASE/PROBLEM OF PATIENT NUMBER %d\n", i);
		scanf("%s", &Pdata[i].disease);
		printf("\n\t\t\tENTER THE NAME OF DOCTOR ASSIGNED TO PATIENT NUMBER %d\n", i);
		scanf("%s", &Pdata[i].doc_name);
		for (loop = 0; loop < 200; loop++)
		{
			filestring[loop] = '\0'; // FILING
		}
		strcat(filestring, "#");
		strcat(filestring, Pdata[i].idcardno);
		strcat(filestring, "#");
		strcat(filestring, Pdata[i].name);
		strcat(filestring, "#");
		strcat(filestring, Pdata[i].fname);
		strcat(filestring, "#");
		strcat(filestring, Pdata[i].gender);
		strcat(filestring, "#");
		strcat(filestring, Pdata[i].bg);
		strcat(filestring, "#"); // STORING INFORMAION
		strcat(filestring, Pdata[i].age);
		strcat(filestring, "#");
		strcat(filestring, Pdata[i].address);
		strcat(filestring, "#");
		strcat(filestring, Pdata[i].mpnumber);
		strcat(filestring, "#");
		strcat(filestring, Pdata[i].disease);
		strcat(filestring, "#");
		strcat(filestring, Pdata[i].doc_name);
		
		fpp = fopen("Patients.txt", "a");
		fputs(filestring, fpp);
		fprintf(fpp, "%s", "\n");
		fclose(fpp);
		fpp = NULL;
	}
	printf("\n\n\n\t\t\t\tDATA INPUT SUCESSFULL\n\n\n");
	getch();
	system("cls");
}

bool searchdoctorsalary(char condition[], char sby, char filestring[])
{
	int flag=0;
	struct doctor searchdata;
	int sal, pay, hrs;
	int loop, count2, count3;

	for (loop = 0; loop < 100; loop++)
	{
		searchdata.name[loop] = '\0';
		searchdata.idcardno[loop] = '\0';
		searchdata.gender[loop] = '\0';
		searchdata.dob[loop] = '\0';
		searchdata.nationality[loop] = '\0';
		searchdata.mpnumber[loop] = '\0';
		searchdata.qualifications[loop] = '\0';
		searchdata.timing[loop] = '\0';
		searchdata.roomno[loop] = '\0';
		searchdata.hoursinday[loop] = '\0';
		searchdata.payrate[loop] = '\0';
	}
	count2 = 0;
	for (loop = 0; loop < strlen(filestring); loop++)
	{
		if (filestring[loop] == '#')
		{
			count2++;
			count3 = 0;
		}
		else if (count2 == 1)
		{
			searchdata.name[count3] = filestring[loop];
			count3++;
		}
		else if (count2 == 2)
		{
			searchdata.idcardno[count3] = filestring[loop];
			count3++;
		}
		else if (count2 == 3)
		{
			searchdata.gender[count3] = filestring[loop];
			count3++;
		}
		else if (count2 == 4)
		{
			searchdata.dob[count3] = filestring[loop];
			count3++;
		}
		else if (count2 == 5)
		{
			searchdata.nationality[count3] = filestring[loop];
			count3++;
		}
		else if (count2 == 6)
		{
			searchdata.mpnumber[count3] = filestring[loop];
			count3++;
		}
		else if (count2 == 7)
		{
			searchdata.qualifications[count3] = filestring[loop];
			count3++;
		}
		else if (count2 == 8)
		{
			searchdata.timing[count3] = filestring[loop];
			count3++;
		}
		else if (count2 == 9)
		{
			searchdata.roomno[count3] = filestring[loop];
			count3++;
		}
		else if (count2 == 10)
		{
			searchdata.hoursinday[count3] = filestring[loop];
			count3++;
		}
		else if (count2 == 11)
		{
			searchdata.payrate[count3] = filestring[loop];
			count3++;
		}
	}
	sscanf(searchdata.hoursinday, "%d", &hrs);
	sscanf(searchdata.payrate, "%d", &pay);
	sal = hrs * pay;

	if (sby == 'n')
	{

		if (strcmp(condition, searchdata.name) == 0)
		{
			system("cls");

			printf("\nDATA FOUND...");
			printf("\nDOCTORS NAME: %s", searchdata.name);
			printf("\nID CARD OF DOCTOR: %s", searchdata.idcardno);
			printf("\nMOBILE NUMBER OF DOCTOR: %s", searchdata.mpnumber);
			printf("\nSALARY OF DOCTOR: %d", sal);
			getch();
			return true;
		}
	
		
	}

	else if (sby == 'i')
	{
		if (strcmp(condition, searchdata.idcardno) == 0) // COMPARING STRINGS
		{
			system("cls");

			printf("\nDATA FOUND...");
			printf("\nDOCTORS NAME: %s", searchdata.name);
			printf("\nID CARD OF DOCTOR: %s", searchdata.idcardno);
			printf("\nMOBILE NUMBER OF DOCTOR: %s", searchdata.mpnumber);
			printf("\nSALARY OF DOCTOR: %d", sal);
			getch();
			return true;
		}
	
		
	}

	else if (sby == 'm')
	{
		if (strcmp(condition, searchdata.mpnumber) == 0) // COMPARING STRINGS
		{
			system("cls");
			printf("\nDATA FOUND...");
			printf("\nDOCTORS NAME: %s", searchdata.name);
			printf("\nID CARD OF DOCTOR: %s", searchdata.idcardno);
			printf("\nMOBILE NUMBER OF DOCTOR: %s", searchdata.mpnumber);
			printf("\nSALARY OF DOCTOR: %d", sal);
			getch();
			return true;
		}
	
		
	}
	return false;
	

}

bool searchnursesalary(char condition[], char sby, char filestring[])
{
	struct nurse searchdata;
	int loop, count2, count3;
	int sal, pay, hrs;
	for (loop = 0; loop < 100; loop++)
	{
		searchdata.name[loop] = '\0';
		searchdata.idcardno[loop] = '\0';
		searchdata.gender[loop] = '\0';
		searchdata.dob[loop] = '\0';
		searchdata.nationality[loop] = '\0';
		searchdata.mpnumber[loop] = '\0';
		searchdata.qualifications[loop] = '\0';
		searchdata.timing[loop] = '\0';
		searchdata.hoursinday[loop] = '\0';
		searchdata.payrate[loop] = '\0';
	}
	count2 = 0;
	for (loop = 0; loop < strlen(filestring); loop++)
	{
		if (filestring[loop] == '#')
		{
			count2++;
			count3 = 0;
		}
		else if (count2 == 1)
		{
			searchdata.name[count3] = filestring[loop];
			count3++;
		}
		else if (count2 == 2)
		{
			searchdata.idcardno[count3] = filestring[loop];
			count3++;
		}
		else if (count2 == 3)
		{
			searchdata.gender[count3] = filestring[loop];
			count3++;
		}
		else if (count2 == 4)
		{
			searchdata.dob[count3] = filestring[loop];
			count3++;
		}
		else if (count2 == 5)
		{
			searchdata.nationality[count3] = filestring[loop];
			count3++;
		}
		else if (count2 == 6)
		{
			searchdata.mpnumber[count3] = filestring[loop];
			count3++;
		}
		else if (count2 == 7)
		{
			searchdata.qualifications[count3] = filestring[loop];
			count3++;
		}
		else if (count2 == 8)
		{
			searchdata.timing[count3] = filestring[loop];
			count3++;
		}
		else if (count2 == 9)
		{
			searchdata.hoursinday[count3] = filestring[loop];
			count3++;
		}
		else if (count2 == 10)
		{
			searchdata.payrate[count3] = filestring[loop];
			count3++;
		}
	}
	sscanf(searchdata.hoursinday, "%d", &hrs);
	sscanf(searchdata.payrate, "%d", &pay); // pay rate of nurse
	sal = hrs * pay;
	if (sby == 'n')
	{
		if (strcmp(condition, searchdata.name) == 0)
		{
			system("cls");
			printf("\nDATA FOUNDED...");
			printf("\nNURSE NAME: %s", searchdata.name);
			printf("\nID CARD NUMBER OF NURSE: %s", searchdata.idcardno);
			printf("\nMOBILE NUMBER OF NURSE: %s", searchdata.mpnumber);
			printf("\nSALARY OF NURSE: %d", sal);
			getch();
			return true;
		}
	
		
	}
	else if (sby == 'i')
	{
		if (strcmp(condition, searchdata.idcardno) == 0) // COMPARING STRINGS
		{

			system("cls");
			printf("\nDATA FOUNDED...");
			printf("\nNURSE NAME: %s", searchdata.name);
			printf("\nID CARD NUMBER OF NURSE: %s", searchdata.idcardno);
			printf("\nMOBILE NUMBER OF NURSE: %s", searchdata.mpnumber);
			printf("\nSALARY OF NURSE: %d", sal);
			getch();
			return true;
		}
	
		
	}
	else if (sby == 'm')
	{
		if (strcmp(condition, searchdata.mpnumber) == 0) // COMPARING STRINGS
		{
			system("cls");
			printf("\nDATA FOUNDED...");
			printf("\nNURSE NAME: %s", searchdata.name);
			printf("\nID CARD NUMBER OF NURSE: %s", searchdata.idcardno);
			printf("\nMOBILE NUMBER OF NURSE: %s", searchdata.mpnumber);
			printf("\nSALARY OF NURSE: %d", sal);
			getch();
			return true;
		}
	
		
	}
	return false;
}

bool searchsurgeonsalary(char condition[], char sby, char filestring[])
{

	struct surgeon searchdata;
	int loop, count2, count3;
	int sal, pay, hrs;
	for (loop = 0; loop < 100; loop++)
	{
		searchdata.name[loop] = '\0';
		searchdata.idcardno[loop] = '\0';
		searchdata.gender[loop] = '\0';
		searchdata.dob[loop] = '\0';
		searchdata.nationality[loop] = '\0';
		searchdata.mpnumber[loop] = '\0';
		searchdata.qualifications[loop] = '\0';
		searchdata.specialization[loop] = '\0';
		searchdata.timing[loop] = '\0';
		searchdata.roomno[loop] = '\0';
		searchdata.hoursinday[loop] = '\0';
		searchdata.payrate[loop] = '\0';
	}
	count2 = 0;
	for (loop = 0; loop < strlen(filestring); loop++)
	{
		if (filestring[loop] == '#')
		{
			count2++;
			count3 = 0;
		}
		else if (count2 == 1)
		{
			searchdata.name[count3] = filestring[loop];
			count3++;
		}
		else if (count2 == 2)
		{
			searchdata.idcardno[count3] = filestring[loop];
			count3++;
		}
		else if (count2 == 3)
		{
			searchdata.gender[count3] = filestring[loop];
			count3++;
		}
		else if (count2 == 4)
		{
			searchdata.dob[count3] = filestring[loop];
			count3++;
		}
		else if (count2 == 5)
		{
			searchdata.nationality[count3] = filestring[loop];
			count3++;
		}
		else if (count2 == 6)
		{
			searchdata.mpnumber[count3] = filestring[loop];
			count3++;
		}
		else if (count2 == 7)
		{
			searchdata.qualifications[count3] = filestring[loop];
			count3++;
		}
		else if (count2 == 8)
		{
			searchdata.specialization[count3] = filestring[loop];
			count3++;
		}
		else if (count2 == 9)
		{
			searchdata.timing[count3] = filestring[loop];
			count3++;
		}
		else if (count2 == 10)
		{
			searchdata.roomno[count3] = filestring[loop];
			count3++;
		}
		else if (count2 == 11)
		{
			searchdata.hoursinday[count3] = filestring[loop];
			count3++;
		}
		else if (count2 == 12)
		{
			searchdata.payrate[count3] = filestring[loop];
			count3++;
		}
	}
	sscanf(searchdata.hoursinday, "%d", &hrs);
	sscanf(searchdata.payrate, "%d", &pay);
	sal = hrs * pay;
	if (sby == 'n')
	{

		if (strcmp(condition, searchdata.name) == 0)
		{
			system("cls");
			printf("\nDATA FOUNDED...");
			printf("\nSURGEONS NAME: %s", searchdata.name);
			printf("\nID CARD NUMBER OF SURGEON: %s", searchdata.idcardno);
			printf("\nMOBILE NUMBER OF SURGEON: %s", searchdata.mpnumber);
			printf("\nSALARY OF SURGEON: %d", sal);
			getch();
			return true;
		}
	
		
	}

	else if (sby == 'i')
	{
		if (strcmp(condition, searchdata.idcardno) == 0) // COMPARING STRINGS
		{

			system("cls");
			printf("\nDATA FOUNDED...");
			printf("\nSURGEONS NAME: %s", searchdata.name);
			printf("\nID CARD NUMBER OF SURGEON: %s", searchdata.idcardno);
			printf("\nMOBILE NUMBER OF SURGEON: %s", searchdata.mpnumber);
			printf("\nSALARY OF SURGEON: %d", sal);
			getch();
			return true;
		}
	
		
	}

	else if (sby == 'm')
	{
		if (strcmp(condition, searchdata.mpnumber) == 0) // COMPARING STRINGS
		{
			system("cls");
			printf("\nDATA FOUNDED...");
			printf("\nSURGEONS NAME: %s", searchdata.name);
			printf("\nID CARD NUMBER OF SURGEON: %s", searchdata.idcardno);
			printf("\nMOBILE NUMBER OF SURGEON: %s", searchdata.mpnumber);
			printf("\nSALARY OF SURGEON: %d", sal);
			getch();
			return true;
		}
	
		
	}
	return false;
}

bool searchdoctor(char condition[], char sby, char filestring[])
{

	struct doctor searchdata;
	int loop, count2, count3;

	for (loop = 0; loop < 25; loop++)
	{
		searchdata.name[loop] = '\0';
		searchdata.idcardno[loop] = '\0';
		searchdata.gender[loop] = '\0';
		searchdata.dob[loop] = '\0';
		searchdata.nationality[loop] = '\0';
		searchdata.mpnumber[loop] = '\0';
		searchdata.qualifications[loop] = '\0';
		searchdata.timing[loop] = '\0';
		searchdata.roomno[loop] = '\0';
		searchdata.hoursinday[loop] = '\0';
		searchdata.payrate[loop] = '\0';
	}

	count2 = 0;
	for (loop = 0; loop < strlen(filestring); loop++) // USING STRNGLENGTH FUNCTION FOR COMAPRING FILING
	{
		if (filestring[loop] == '#')
		{
			count2++;
			count3 = 0;
		}
		else if (count2 == 1)
		{
			searchdata.name[count3] = filestring[loop];
			count3++;
		}
		else if (count2 == 2)
		{
			searchdata.idcardno[count3] = filestring[loop];
			count3++;
		}
		else if (count2 == 3)
		{
			searchdata.gender[count3] = filestring[loop];
			count3++;
		}
		else if (count2 == 4)
		{
			searchdata.dob[count3] = filestring[loop];
			count3++;
		}
		else if (count2 == 5)
		{
			searchdata.nationality[count3] = filestring[loop];
			count3++;
		}
		else if (count2 == 6)
		{
			searchdata.mpnumber[count3] = filestring[loop];
			count3++;
		}
		else if (count2 == 7)
		{
			searchdata.qualifications[count3] = filestring[loop];
			count3++;
		}
		else if (count2 == 8)
		{
			searchdata.timing[count3] = filestring[loop];
			count3++;
		}
		else if (count2 == 9)
		{
			searchdata.roomno[count3] = filestring[loop];
			count3++;
		}
		else if (count2 == 10)
		{
			searchdata.hoursinday[count3] = filestring[loop];
			count3++;
		}
		else if (count2 == 11)
		{
			searchdata.payrate[count3] = filestring[loop];
			count3++;
		}
	}
	if (sby == 'n')
	{

		if (strcmp(condition, searchdata.name) == 0) // COMPARING STRINGS
		{
			system("color a0 ");
			system("cls");
			
			printf("\n\t\t\tDATA FOUNDED...");
			printf("\n\t\t\tDOCTOR NAME:%s", searchdata.name);
			printf("\n\t\t\tID CARD OF DOCTOR:%s", searchdata.idcardno);
			printf("\n\t\t\tGENDER OF DOCTOR:%s", searchdata.gender);
			printf("\n\t\t\tDATE OF BIRTH OF DOCTOR:%s", searchdata.dob);
			printf("\n\t\t\tNATIONALITY OF DOCTOR:%s", searchdata.nationality);
			printf("\n\t\t\tMOBILE NUMBER OF DOCTOR:%s", searchdata.mpnumber);
			printf("\n\t\t\tQUALIFICATION OF DOCTOR:%s", searchdata.qualifications);
			printf("\n\t\t\tAVAILABLE TIME OF DOCTOR:%s", searchdata.timing);
			printf("\n\t\t\tROOM NUMBER OF DOCTOR IN HOSPITAL:%s", searchdata.roomno);
			printf("\n\t\t\tHOURS IN A DAY FOR DOCTOR:%s", searchdata.hoursinday);
			printf("\n\t\t\tPAY RATE OF DOCTOR:%s", searchdata.payrate);
			getch();
			return true;
		}
		
	}

	else if (sby == 'i')
	{
	
	
		if (strcmp(condition, searchdata.idcardno) == 0) // COMPARING STRINGS
		{
			
			system("color a0 ");
			system("cls");

			printf("\n\t\t\tDATA FOUNDED...");
			printf("\n\t\t\tDOCTOR NAME:%s", searchdata.name);
			printf("\n\t\t\tID CARD OF DOCTOR:%s", searchdata.idcardno);
			printf("\n\t\t\tGENDER OF DOCTOR:%s", searchdata.gender);
			printf("\n\t\t\tDATE OF BIRTH OF DOCTOR:%s", searchdata.dob);
			printf("\n\t\t\tNATIONALITY OF DOCTOR:%s", searchdata.nationality);
			printf("\n\t\t\tMOBILE NUMBER OF DOCTOR:%s", searchdata.mpnumber);
			printf("\n\t\t\tQUALIFICATION OF DOCTOR:%s", searchdata.qualifications);
			printf("\n\t\t\tAVAILABLE TIME OF DOCTOR:%s", searchdata.timing);
			printf("\n\t\t\tROOM NUMBER OF DOCTOR IN HOSPITAL:%s", searchdata.roomno);
			printf("\n\t\t\tHOURS IN A DAY FOR DOCTOR:%s", searchdata.hoursinday);
			printf("\n\t\t\tPAY RATE OF DOCTOR:%s", searchdata.payrate);
			getch();
			return true;
		}
		
		
	}

	else if (sby == 'm')
	{
		if (strcmp(condition, searchdata.mpnumber) == 0) // COMPARING STRINGS
		{
			system("color a0 ");
			system("cls");
			printf("\n\t\t\tDATA FOUNDED...");
			printf("\n\t\t\tDOCTOR NAME:%s", searchdata.name);
			printf("\n\t\t\tID CARD OF DOCTOR:%s", searchdata.idcardno);
			printf("\n\t\t\tGENDER OF DOCTOR:%s", searchdata.gender);
			printf("\n\t\t\tDATE OF BIRTH OF DOCTOR:%s", searchdata.dob);
			printf("\n\t\t\tNATIONALITY OF DOCTOR:%s", searchdata.nationality);
			printf("\n\t\t\tMOBILE NUMBER OF DOCTOR:%s", searchdata.mpnumber);
			printf("\n\t\t\tQUALIFICATION OF DOCTOR:%s", searchdata.qualifications);
			printf("\n\t\t\tAVAILABLE TIME OF DOCTOR:%s", searchdata.timing);
			printf("\n\t\t\tROOM NUMBER OF DOCTOR IN HOSPITAL:%s", searchdata.roomno);
			printf("\n\t\t\tHOURS IN A DAY FOR DOCTOR:%s", searchdata.hoursinday);
			printf("\n\t\t\tPAY RATE OF DOCTOR:%s", searchdata.payrate);
			getch();
			return true;
		}
		
	}
	return false;
}

bool searchnurse(char condition[], char sby, char filestring[])
{
	
	struct nurse searchdata;
	int loop, count2, count3;

	for (loop = 0; loop < 25; loop++)
	{
		searchdata.name[loop] = '\0';
		searchdata.idcardno[loop] = '\0';
		searchdata.gender[loop] = '\0';
		searchdata.dob[loop] = '\0';
		searchdata.nationality[loop] = '\0';
		searchdata.mpnumber[loop] = '\0';
		searchdata.qualifications[loop] = '\0';
		searchdata.timing[loop] = '\0';
		searchdata.hoursinday[loop] = '\0';
		searchdata.payrate[loop] = '\0';
	}

	count2 = 0;
	for (loop = 0; loop < strlen(filestring); loop++) // USING STRNGLENGTH FUNCTION FOR COMAPRING FILING
	{
		if (filestring[loop] == '#')
		{
			count2++;
			count3 = 0;
		}
		else if (count2 == 1)
		{
			searchdata.name[count3] = filestring[loop];
			count3++;
		}
		else if (count2 == 2)
		{
			searchdata.idcardno[count3] = filestring[loop];
			count3++;
		}
		else if (count2 == 3)
		{
			searchdata.gender[count3] = filestring[loop];
			count3++;
		}
		else if (count2 == 4)
		{
			searchdata.dob[count3] = filestring[loop];
			count3++;
		}
		else if (count2 == 5)
		{
			searchdata.nationality[count3] = filestring[loop];
			count3++;
		}
		else if (count2 == 6)
		{
			searchdata.mpnumber[count3] = filestring[loop];
			count3++;
		}
		else if (count2 == 7)
		{
			searchdata.qualifications[count3] = filestring[loop];
			count3++;
		}
		else if (count2 == 8)
		{
			searchdata.timing[count3] = filestring[loop];
			count3++;
		}

		else if (count2 == 9)
		{
			searchdata.hoursinday[count3] = filestring[loop];
			count3++;
		}
		else if (count2 == 10)
		{
			searchdata.payrate[count3] = filestring[loop];
			count3++;
		}
	}
	if (sby == 'n')
	{

		if (strcmp(condition, searchdata.name) == 0) // COMPARING STRINGS
		{
			system("color a0 ");
			system("cls");
			printf("\n\t\t\tDATA FOUNDED...");
			printf("\n\t\t\tNURSE NAME:%s", searchdata.name);
			printf("\n\t\t\tID CARD OF NURSE:%s", searchdata.idcardno);
			printf("\n\t\t\tGENDER OF NURSE:%s", searchdata.gender);
			printf("\n\t\t\tDATE OF BIRTH OF NURSE:%s", searchdata.dob);
			printf("\n\t\t\tNATIONALITY OF NURSE:%s", searchdata.nationality);
			printf("\n\t\t\tMOBILE NUMBER OFNURSE:%s", searchdata.mpnumber);
			printf("\n\t\t\tQUALIFICATION OF NURSE:%s", searchdata.qualifications);
			printf("\n\t\t\tAVAILABLE TIME OF NURSE:%s", searchdata.timing);
			printf("\n\t\t\tHOURS IN A DAY FOR NURSE:%s", searchdata.hoursinday);
			printf("\n\t\t\tPAY RATE OF NURSE:%s", searchdata.payrate);
			getch();
			return true;
		}
		
	}

	else if (sby == 'i')
	{
		if (strcmp(condition, searchdata.idcardno) == 0) // COMPARING STRINGS
		{
			system("color a0 ");
			system("cls");
			printf("\n\t\t\tDATA FOUNDED...");
			printf("\n\t\t\tNURSE NAME:%s", searchdata.name);
			printf("\n\t\t\tID CARD OF NURSE:%s", searchdata.idcardno);
			printf("\n\t\t\tGENDER OF NURSE:%s", searchdata.gender);
			printf("\n\t\t\tDATE OF BIRTH OF NURSE:%s", searchdata.dob);
			printf("\n\t\t\tNATIONALITY OF NURSE:%s", searchdata.nationality);
			printf("\n\t\t\tMOBILE NUMBER OFNURSE:%s", searchdata.mpnumber);
			printf("\n\t\t\tQUALIFICATION OF NURSE:%s", searchdata.qualifications);
			printf("\n\t\t\tAVAILABLE TIME OF NURSE:%s", searchdata.timing);

			printf("\n\t\t\tHOURS IN A DAY FOR NURSE:%s", searchdata.hoursinday);
			printf("\n\t\t\tPAY RATE OF NURSE:%s", searchdata.payrate);
			getch();
			return true;
		}
	
	}

	else if (sby == 'm')
	{
		if (strcmp(condition, searchdata.mpnumber) == 0) // COMPARING STRINGS
		{
			system("color a0 ");
			system("cls");
			printf("\n\t\t\tDATA FOUNDED...");
			printf("\n\t\t\tNURSE NAME:%s", searchdata.name);
			printf("\n\t\t\tID CARD OF NURSE:%s", searchdata.idcardno);
			printf("\n\t\t\tGENDER OF NURSE:%s", searchdata.gender);
			printf("\n\t\t\tDATE OF BIRTH OF NURSE:%s", searchdata.dob);
			printf("\n\t\t\tNATIONALITY OF NURSE:%s", searchdata.nationality);
			printf("\n\t\t\tMOBILE NUMBER OFNURSE:%s", searchdata.mpnumber);
			printf("\n\t\t\tQUALIFICATION OF NURSE:%s", searchdata.qualifications);
			printf("\n\t\t\tAVAILABLE TIME OF NURSE:%s", searchdata.timing);

			printf("\n\t\t\tHOURS IN A DAY FOR NURSE:%s", searchdata.hoursinday);
			printf("\n\t\t\tPAY RATE OF NURSE:%s", searchdata.payrate);
			getch();
			return true;
		}
		
	}
	return false;
}

bool searchsurgeon(char condition[], char sby, char filestring[])
{

	struct surgeon searchdata;
	int loop, count2, count3;

	for (loop = 0; loop < 25; loop++)
	{
		searchdata.name[loop] = '\0';
		searchdata.idcardno[loop] = '\0';
		searchdata.gender[loop] = '\0';
		searchdata.dob[loop] = '\0';
		searchdata.nationality[loop] = '\0';
		searchdata.mpnumber[loop] = '\0';
		searchdata.qualifications[loop] = '\0';
		searchdata.timing[loop] = '\0';
		searchdata.hoursinday[loop] = '\0';
		searchdata.payrate[loop] = '\0';
	}

	count2 = 0;
	for (loop = 0; loop < strlen(filestring); loop++) // USING STRNGLENGTH FUNCTION FOR COMAPRING FILING
	{
		if (filestring[loop] == '#')
		{
			count2++;
			count3 = 0;
		}
		else if (count2 == 1)
		{
			searchdata.name[count3] = filestring[loop];
			count3++;
		}
		else if (count2 == 2)
		{
			searchdata.idcardno[count3] = filestring[loop];
			count3++;
		}
		else if (count2 == 3)
		{
			searchdata.gender[count3] = filestring[loop];
			count3++;
		}
		else if (count2 == 4)
		{
			searchdata.dob[count3] = filestring[loop];
			count3++;
		}
		else if (count2 == 5)
		{
			searchdata.nationality[count3] = filestring[loop];
			count3++;
		}
		else if (count2 == 6)
		{
			searchdata.mpnumber[count3] = filestring[loop];
			count3++;
		}
		else if (count2 == 7)
		{
			searchdata.qualifications[count3] = filestring[loop];
			count3++;
		}
		else if (count2 == 8)
		{
			searchdata.specialization[count3] = filestring[loop];
			count3++;
		}
		else if (count2 == 9)
		{
			searchdata.timing[count3] = filestring[loop];
			count3++;
		}
		else if (count2 == 10)
		{
			searchdata.roomno[count3] = filestring[loop];
			count3++;
		}

		else if (count2 == 11)
		{
			searchdata.hoursinday[count3] = filestring[loop];
			count3++;
		}
		else if (count2 == 12)
		{
			searchdata.payrate[count3] = filestring[loop];
			count3++;
		}
	}
	if (sby == 'n')
	{

		if (strcmp(condition, searchdata.name) == 0) // COMPARING STRINGS
		{
			system("cls");
			system("color a0 ");
			printf("\n\t\t\t\nDATA FOUNDED...");
			printf("\n\t\t\t\nSURGEON NAME: %s", searchdata.name);
			printf("\n\t\t\t\nID CARD OF SURGEON: %s", searchdata.idcardno);
			printf("\n\t\t\t\nGENDER OF SURDEON: %s", searchdata.gender);
			printf("\n\t\t\t\nDATE OF BIRTH OF SURGEON: %s", searchdata.dob);
			printf("\n\t\t\t\nNATIONALITY OF SURGEON: %s", searchdata.nationality);
			printf("\n\t\t\t\nMOBILE NUMBER OF SURGEON: %s", searchdata.mpnumber);
			printf("\n\t\t\t\nQUALIFICATION OF NURSE: %s", searchdata.qualifications);
			printf("\n\t\t\t\nSPEACIALIZATION OF SURGEON: %s", searchdata.specialization);
			printf("\n\t\t\t\nAVAILABLE TIME OF SURGEON: %s", searchdata.timing);
			printf("\n\t\t\t\nROOM NUMBER OF SURGEON: %s", searchdata.roomno);
			printf("\n\t\t\t\nHOURS IN DAY OF SURGEON: %s", searchdata.hoursinday);
			printf("\n\t\t\t\nPAYATE OF SURGEON: %s", searchdata.payrate);
			getch();
			return true;
		}
		
	}

	else if (sby == 'i')
	{
		if (strcmp(condition, searchdata.idcardno) == 0) // COMPARING STRINGS
		{
			system("cls");
			system("color a0 ");
			printf("\n\t\t\t\nDATA FOUNDED...");
			printf("\n\t\t\t\nSURGEON NAME: %s", searchdata.name);
			printf("\n\t\t\t\nID CARD OF SURGEON: %s", searchdata.idcardno);
			printf("\n\t\t\t\nGENDER OF SURDEON: %s", searchdata.gender);
			printf("\n\t\t\t\nDATE OF BIRTH OF SURGEON: %s", searchdata.dob);
			printf("\n\t\t\t\nNATIONALITY OF SURGEON: %s", searchdata.nationality);
			printf("\n\t\t\t\nMOBILE NUMBER OF SURGEON: %s", searchdata.mpnumber);
			printf("\n\t\t\t\nQUALIFICATION OF NURSE: %s", searchdata.qualifications);
			printf("\n\t\t\t\nSPEACIALIZATION OF SURGEON: %s", searchdata.specialization);
			printf("\n\t\t\t\nAVAILABLE TIME OF SURGEON: %s", searchdata.timing);
			printf("\n\t\t\t\nROOM NUMBER OF SURGEON: %s", searchdata.roomno);
			printf("\n\t\t\t\nHOURS IN DAY OF SURGEON: %s", searchdata.hoursinday);
			printf("\n\t\t\t\nPAYATE OF SURGEON: %s", searchdata.payrate);
			getch();
			return true;
		}
		
	}

	else if (sby == 'm')
	{
		if (strcmp(condition, searchdata.mpnumber) == 0) // COMPARING STRINGS
		{
			system("cls");
			system("color a0 ");
			printf("\n\t\t\t\nDATA FOUNDED...");
			printf("\n\t\t\t\nSURGEON NAME: %s", searchdata.name);
			printf("\n\t\t\t\nID CARD OF SURGEON: %s", searchdata.idcardno);
			printf("\n\t\t\t\nGENDER OF SURGEON: %s", searchdata.gender);
			printf("\n\t\t\t\nDATE OF BIRTH OF SURGEON: %s", searchdata.dob);
			printf("\n\t\t\t\nNATIONALITY OF SURGEON: %s", searchdata.nationality);
			printf("\n\t\t\t\nMOBILE NUMBER OF SURGEON: %s", searchdata.mpnumber);
			printf("\n\t\t\t\nQUALIFICATION OF NURSE: %s", searchdata.qualifications);
			printf("\n\t\t\t\nSPEACIALIZATION OF SURGEON: %s", searchdata.specialization);
			printf("\n\t\t\t\nAVAILABLE TIME OF SURGEON: %s", searchdata.timing);
			printf("\n\t\t\t\nROOM NUMBER OF SURGEON: %s", searchdata.roomno);
			printf("\n\t\t\t\nHOURS IN DAY OF SURGEON: %s", searchdata.hoursinday);
			printf("\n\t\t\t\nPAYATE OF SURGEON: %s", searchdata.payrate);
			getch();
			return true;
		}
		
	}
	return false;
}

bool searchpatient(char condition[], char sby, char filestring[])
{

	struct patient searchdata;
	int loop, count2, count3;

	for (loop = 0; loop < 100; loop++)
	{
		searchdata.idcardno[loop] = '\0';
		searchdata.name[loop] = '\0';
		searchdata.fname[loop] = '\0';
		searchdata.gender[loop] = '\0';
		searchdata.bg[loop] = '\0';
		searchdata.age[loop] = '\0';
		searchdata.address[loop] = '\0';
		searchdata.mpnumber[loop] = '\0';
		searchdata.disease[loop] = '\0';
		searchdata.doc_name[loop] = '\0';
	}

	count2 = 0;
	for (loop = 0; loop < strlen(filestring); loop++)
	{
		if (filestring[loop] == '#')
		{
			count2++;
			count3 = 0;
		}
		else if (count2 == 1)
		{
			searchdata.idcardno[count3] = filestring[loop];
			count3++;
		}
		else if (count2 == 2)
		{
			searchdata.name[count3] = filestring[loop];
			count3++;
		}
		else if (count2 == 3)
		{
			searchdata.fname[count3] = filestring[loop];
			count3++;
		}
		else if (count2 == 4)
		{
			searchdata.gender[count3] = filestring[loop];
			count3++;
		}
		else if (count2 == 5)
		{
			searchdata.bg[count3] = filestring[loop];
			count3++;
		}
		else if (count2 == 6)
		{
			searchdata.age[count3] = filestring[loop];
			count3++;
		}
		else if (count2 == 7)
		{
			searchdata.address[count3] = filestring[loop];
			count3++;
		}
		else if (count2 == 8)
		{
			searchdata.mpnumber[count3] = filestring[loop];
			count3++;
		}
		else if (count2 == 9)
		{
			searchdata.disease[count3] = filestring[loop];
			count3++;
		}
		else if (count2 == 10)
		{
			searchdata.doc_name[count3] = filestring[loop];
			count3++;
		}
	}
	if (sby == 'n')
	{

		if (strcmp(condition, searchdata.name) == 0) // COMPARING STRINGS
		{
			system("cls");
			system("color a0 ");
			printf("\n\t\t\t\nDATA FOUNDED...");
			printf("\n\t\t\t\nID CARD NUMBER OF PATIENT: %s", searchdata.idcardno);
			printf("\n\t\t\t\nNPATIENT NAME: %s", searchdata.name);
			printf("\n\t\t\t\nGUARDIANS NAME OF PATIENT: %s", searchdata.fname);
			printf("\n\t\t\t\nGENDER OF PATIENT: %s", searchdata.gender);
			printf("\n\t\t\t\nBLOOD GROUP OF PATIENT: %s", searchdata.bg);
			printf("\n\t\t\t\nAGE OF PATIENT: %s", searchdata.age);
			printf("\n\t\t\t\nADDRESS OF PATIENT: %s", searchdata.address);
			printf("\n\t\t\t\nMOBILE NUMBER OF PATIENT: %s", searchdata.mpnumber);
			printf("\n\t\t\t\nDISEASE OR PROBLEM OF PATIENT: %s", searchdata.disease);
			printf("\n\t\t\t\nNAME OF DOCTOR ASSIGNED TO PATIENT: %s", searchdata.doc_name);
			getch();
			return true;
		}
		
	}

	else if (sby == 'i')
	{
		if (strcmp(condition, searchdata.idcardno) == 0) // COMPARING STRINGS
		{
			system("cls");
			system("color a0 ");
			printf("\n\t\t\t\nDATA FOUNDED...");
			printf("\n\t\t\t\nID CARD NUMBER OF PATIENT: %s", searchdata.idcardno);
			printf("\n\t\t\t\nNPATIENT NAME: %s", searchdata.name);
			printf("\n\t\t\t\nGUARDIANS NAME OF PATIENT: %s", searchdata.fname);
			printf("\n\t\t\t\nGENDER OF PATIENT: %s", searchdata.gender);
			printf("\n\t\t\t\nBLOOD GROUP OF PATIENT: %s", searchdata.bg);
			printf("\n\t\t\t\nAGE OF PATIENT: %s", searchdata.age);
			printf("\n\t\t\t\nADDRESS OF PATIENT: %s", searchdata.address);
			printf("\n\t\t\t\nMOBILE NUMBER OF PATIENT: %s", searchdata.mpnumber);
			printf("\n\t\t\t\nDISEASE OR PROBLEM OF PATIENT: %s", searchdata.disease);
			printf("\n\t\t\t\nNAME OF DOCTOR ASSIGNED TO PATIENT: %s", searchdata.doc_name);
			getch();
			return true;
		}
		
	}

	else if (sby == 'm')
	{
		if (strcmp(condition, searchdata.mpnumber) == 0) // COMPARING STRINGS
		{
			system("cls");
			system("color a0 ");
			printf("\n\t\t\t\nDATA FOUNDED...");
			printf("\n\t\t\t\nID CARD NUMBER OF PATIENT: %s", searchdata.idcardno);
			printf("\n\t\t\t\nNPATIENT NAME: %s", searchdata.name);
			printf("\n\t\t\t\nGUARDIANS NAME OF PATIENT: %s", searchdata.fname);
			printf("\n\t\t\t\nGENDER OF PATIENT: %s", searchdata.gender);
			printf("\n\t\t\t\nBLOOD GROUP OF PATIENT: %s", searchdata.bg);
			printf("\n\t\t\t\nAGE OF PATIENT: %s", searchdata.age);
			printf("\n\t\t\t\nADDRESS OF PATIENT: %s", searchdata.address);
			printf("\n\t\t\t\nMOBILE NUMBER OF PATIENT: %s", searchdata.mpnumber);
			printf("\n\t\t\t\nDISEASE OR PROBLEM OF PATIENT: %s", searchdata.disease);
			printf("\n\t\t\t\nNAME OF DOCTOR ASSIGNED TO PATIENT: %s", searchdata.doc_name);
			getch();
			return true;
		}
		
	}
	return false;
}




