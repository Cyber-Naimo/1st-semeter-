#include<stdio.h>
#include<conio.h>


void sort(int*,int*);					// function for SORTOING IN ASCENDING ORDER
void maximum(int* ,int*);				// function for FINDING THE MAXIMUM ELEMENT
void reverse( int *,int* );				// function for SORTOING IN DESCENDING ORDER
void swap(int*,int*);					// function for swapping



int main()
{

	int size;
    int *arr[size];
	int choice,a,b;
	
	
		while(choice!=5)
{

			printf("\nENTER WHAT YOU WANT TO DO:\n");
			printf("ENTER 1 FOR SORTING THE ARRAY ELEMENTS:\n");
			printf("ENTER 2 FOR FINDING THE MAXIMUM IN ARRAY ELEMENTS:\n");
			printf("ENTER 3 FOR REVERSE THE ORDER OF ARRAY ELEMENTS:\n");
			printf("ENTER 4 FOR SWAPPING:\n");
			printf("ENTER 5 FOR EXIT:\n");
			scanf("%d",&choice);
				switch(choice)
		{
			case 1:
					{	
						int i;
						printf("ENTER THE SIZE OF ARRAY:\n");
						scanf("%d",&size);
					    int arr[size];
						printf("ENTER THE ARRAY ELEMENTS:\n");
						for(i=0;i<size;i++)
						{
							scanf("%d",arr+i);		// printing the n no of elements
						}
						sort(&size,arr);			// calling the sort function for ascending sorting
						break;
					}						
			
			case 2:
				 {
				 		int i;
				 		printf("ENTER SIZE OF ARRAY:\n");
					 	scanf("%d",&size);
					 	int arr[size];
					 	printf("ENTER ARRAY ELEMENTS:\n");
					 	for(i=0;i<size;i++)
					 	{
					 		scanf("%d",(arr+i));
						}
				 		maximum(&size,arr);		//CALLING THE MAX FUNCTION
						 break;
				}
				
			case 3:
					{
						int i,j,descend=0;
						printf("ENTER THE SIZE OF ARRAY:\n");
						scanf("%d",&size);
						int arr[size];
						printf("ENTER THE ARRAY ELEMENTS:\n");
						
						for(i=0;i<size;i++)
						{
							scanf("%d",arr+i); 			// PRINTF ELEMENTS
						}
					
						reverse(&size,arr);		// calling the sort function for descending sorting
						break;
					}
					
			case 4:
					{
						
						printf("ENTER TWO NUMBERS:\n");
						scanf("%d%d",&a,&b);
						swap(&a,&b);			// FUNCTION FOR SWAPPING
						break;
					}
			}
		}
	}

	void sort(int *size ,int *arr)			// FUNCTION DEFINATION FOR PROTOTYPE
		{
						int i,j,ascend;
						
						
							for(i=0;i<*size;i++)
						{
									for(j=i+1;j<*size;j++)
								{
										if(*(arr+i) >*(arr+j))
									{	
										ascend=*(arr+i);
										*(arr+i)=*(arr+j);			// swapping the value to give array in ascending order
										*(arr+j)=ascend;
									}
								}
						}
						printf("ARRAY ELEMENTS AFTER SORTING IN ASCENDING ORDER SHOWN BELOW:\n");
						for(i=0;i<*size;i++)
						{
							printf("%d\t",*(arr+i));		// ELEMENTS IN ASCENDING ORDER
						}
						getch ();
		}

		void maximum(int *size,int *arr)		// function defination for maximum array elements
		{
						int i,j;
					 
						
						int max=arr[0];			// INITIALIZING THE MAX ARRAY ;
						for(i=0;i<*size;i++)
						{
							if(*(arr+i) > max)			// CONDITION FOR MAXIMIUM ARRAY ELEMENTS
							{				
								max=*(arr+i);
								
							}
		
						}
						printf("THE MAXIMUM IN ARRAY ELEMENTS IS \t%d:",max);		// maximium element
						getch ();
		}


		void reverse(int *size ,int *arr)		//FUNCTION PROTOTYPE FOR REVERSE ORDER
		{
						int i;
						
						printf("ARRAY ELEMENTS AFTER SORTING IN REVERSE ORDER SHOWN BELOW:\n");
						
							for(i=*size-1;i>=0;i--)	// swapping the value to give array in reverse order
						{
			
							printf("%d\t",*(arr+i));		// ELEMENTS IN REVERSE ORDER
						}
						getch ();

		}


		void swap(int *x,int*y)		// FUNCTION PROTOTYPE OR DEFINATION FOR SWAP
	{	
	
					int temp;		// SWAPPING THE VARIABLS TO INTERCHANGE THIER VALUES
					
					temp=*x;
					*x=*y;
					*y=temp;
					
					printf("VALUE AFTER SWAPPING:\n");
					printf("A=%d,B=%d",*x,*y);		// swap value;
					getch ();
	
	}

