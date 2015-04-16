#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	char s[45],i,j,k=0,l;
	printf("Enter the string\n");
	gets(s);
	for(i=0;i<strlen(s)+2*k;i++)
	{
		
		if(s[i]=='c')
		{
			for(j=strlen(s)+2;j>=3;j--)
			{
				s[i+j]=s[i+j-2];
	        }
	        s[i]='x';
	        s[i+1]='c';
	        s[i+2]='x';k++;
	    }
		i++;   }
	
s[strlen(s)+2*k]='\0';
puts(s);
}
