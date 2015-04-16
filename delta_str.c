#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	char a[100000],b[100000];
	int i,j,k=0,m=0;
	scanf("%s",a);
	for(i=strlen(a)-1,j=0;i>=0;i--,j++)
	{
		b[j]=a[i];
	}puts(a);puts(b);
	for(i=0;i<strlen(a);i++)
	{
		if(a[i]!=b[i])
		{
			for(j=i;j<strlen(a)-1;j++)
			{
			   b[j]=b[j+1];
		}
		for(j=strlen(a)-i-1;j<strlen(a)-1;j++)
		{
			a[j]=a[j+1];
		}
	a[strlen(a)-1]='\0';	b[strlen(b)-1]='\0';m++;
    break;
	}

    }
	for(i=0;i<strlen(a);i++)
	{
		if(a[i]!=b[i])
		 { puts(a);puts(b);printf("NO");k++;break;}
	}
	
	if(k==0)
	{
	puts(a);puts(b);  if(m==1)	printf("YES");else printf("NO");
	}
	return 0;
}
