#include<stdio.h>
#include<math.h>
#include<conio.h>

void SortFunction(int size, int* ptr,int order);			// here *ptr is ARRAY 
void SortFunct(int size, int* ptr,int order);

int main()
{
    int size,i,order;
    printf("ENTER THE ORDER IN WHICH YOU WANT TO SORT:\n");
    printf("ENTER 1 FOR ASCENDING ORDER:\nENTER 2 FOR DESCENDING ORDER:\n");
    scanf("%d",&order);
    
  
    if(order==1)
    {
				   	printf("ENTER SIZE OF AN ARRAY:\n");
				    scanf("%d",&size);
				    int arr[size];
    			 	printf("ENTER ARRAY ELEMENTS:\n");
				    for(i=0;i<size;i++)
				    {
				    	
				    	scanf("%d",&arr[i]);
					}
		  
		    		SortFunct(size,arr,1);
		  
		    		getch ();
	}
	if(order==2)
	{
				 	printf("ENTER SIZE OF AN ARRAY:\n");
				    scanf("%d",&size);
				    int arr[size];
					
				    printf("ENTER ARRAY ELEMENTS:\n");
				    for(i=0;i<size;i++)
				    {
				    	
				    	scanf("%d",&arr[i]);
					}
				  
				    SortFunction(size,arr,2);
				  
				   
	}
	getch ();
	 
}
  
// Function to sort the numbers using pointers
void SortFunct(int size, int* ptr,int order)
{
    int i, j, t;
  
    // Sort the numbers using pointers
    for (i = 0; i < size; i++) {
  
        for (j = i + 1; j < size; j++) {
  
            if (*(ptr + i) > *(ptr + j)) {
  
                t = *(ptr + i);
                *(ptr + i) = *(ptr + j);
                *(ptr + j) = t;
            }
        }
    }
  
    // print the 
    printf("ARRAY IN ASCENDING ORDER:\n");
    for (i = 0; i < size; i++)
    {
	
        printf("%d\t", *(ptr + i));
    }
}

void SortFunction(int size, int* ptr,int order)
{
    int i, j, t;
  
    // Sort the numbers using pointers
    for (i = 0; i < size; i++) {
  
        for (j = i + 1; j < size; j++) {
  
            if (*(ptr + i) < *(ptr + j)) {
  
                t = *(ptr + i);
                *(ptr + i) = *(ptr + j);
                *(ptr + j) = t;
            }
        }
    }
  
    // print the 
    printf("ARRAY IN DESCENDING ORDER:\n");
    for (i = 0; i < size; i++)
    {
	
        printf("%d\t", *(ptr + i));
    }
}
  


