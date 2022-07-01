#include<stdio.h>
#include<string.h>
int main(){
	int t,n=0,m=0,o=0,i,u,v;
	char c[100],d[100];
	printf("ENTER USERNAME: \n");
	gets(d);
	printf("ENTER PASSWORD: \n");
	gets(c);
	for(i=0;i<sizeof(c);i++)
	{
		for(t=97;t<123;t++)
		{
			if(c[i]==t)
			{
				m=1;
				break;
			}
		}
		for(u=65;u<91;u++)
		{
			if(c[i]==u)
			{
				n=1;
				break;
			}
		}
		for(v=0;v<10;v++)
		{
			if(c[i]==v)
			{
				o=1;
				break;
			}
		}
	}
//	printf("%d",sizeof(c));
	if(c<6)
	{
		printf("PLEASE INPUT 6 CHARACTER, CHARACTER ARE LESS THAN SIX");
	}
	else if((m==1)&&(n==1)&&(o==1))
	{
		printf("ACCOUNT CREATED SUCCESSFULLY \n\n");
		printf("WELCOME USERNAME YOU ARE NOW LOGGED IN ");
	}
	else{
		printf("PASSWORD SHOULD BE 6 CHARACTER ALONG WITH AT LEAST ONE (1)NUMERIC VALUE, 1(ONE) CAPITAL LETTER  AND 1(ONE) SMALL LETTER");
	}
}
