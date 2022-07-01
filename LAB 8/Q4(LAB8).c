#include<stdio.h>
int main()
{
	int i=1,j=0,k=1,m,count,size;


		printf("ENTER SIZE OF ARRAY: ");
		scanf("%d",&size);
	
		int AR[size],AN[size];
	
		printf("============================== ***************** ELEMENT OF ARRAY 1************** ===============================\n");
		for(j=0,m=1;j<size;j++)
		{
			printf("ENTER THE ELEMENT NO: %d: ",m);
			scanf("%d",&AN[j]);
			m++;
	
	
		}
			printf("============================== ***************** ELEMENT OF ARRAY 2 ************** ===============================\n");
			for(j=0,m=1; j < size ;j++)
			{
		
					printf("ENTER THE ELEMENT NO: %d: ",m);
					scanf("%d",&AR[j]);
					m++;}
	
					for(j=0,count=0;j<size;j++){
					if( AN[j] == AR[j] )
					count++;

			}

				if(count!=0)
				{
					printf("ARRAY IS SYMETRIC");
				}	
				else 
				{
					printf("ARRAY IS ASYMETRIC");
				}

return 0;
}
