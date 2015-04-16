#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	char a[150],b[30],c[35],d[30],e[35];
	int flag=0,i,j,k,cnt,x,y,m,n;
	printf("Enter whatever yoouu want without pressing enter...\n\n");
	gets(a);
	printf("\nSEARCH FOR....\n");
	gets(b);
	printf("\nReplace with...\n");
	gets(c);
	cnt=strlen(a);
	x=strlen(c)-strlen(b);
	m=strlen(b);
	n=strlen(c);
	

	for(i=0;i<cnt;i++)
	{
		if((m%2)!=0)
		{
		for(j=-m/2,k=0;j<=m/2;j++,k++)
		   d[k]=a[i+j];
		   }
		   else
		   {
		   for(j=-m/2,k=0;j<=m/2-1;j++,k++)
		   d[k]=a[i+j];
		   
		   }d[m]='\0';
	 if(strcmp(d,b)==0)
		 {  
		   if((m%2)!=0)
		   {
		   	if(x>0)
		   	 {
		   	 	for(j=cnt-1+x;j>i+m/2;j--)
		   	 	  a[j]=a[j-x];
		   	 	  
			    for(j=-m/2,k=0;j<=m/2+x;j++,k++)
			        a[i+j]=c[k];
		   	     cnt=cnt+x;		   	}

		   	if(x==0)
		   	{
		   		for(j=-m/2,k=0;j<=m/2;j++,k++)
		   		    a[i+j]=c[k];
		   		}printf("%d %d %d %d",i,m/2,x,i+m/2+x+1);
		   	if(x<0)
			   {
			   for(j=i+m/2+x+1;j<=cnt-1+x;j++)	
		   	       a[j]=a[j-x];
		   	
                for(j=-m/2,k=0;j<=m/2+x;j++,k++)
				    a[i+j]=c[k];
					cnt=cnt+x;
				}
			}
		   else
		   {
		   	if(x>0)
		   	{
		   		for(j=cnt-1+x;j>i+m/2-1;j--)
		   		a[j]=a[j-x];
		        for(j=-m/2,k=0;k<n;j++,k++)
				a[i+j]=c[k]; 		
	            cnt=cnt+x;
				}
			if(x==0)
			{
			for(j=-m/2,k=0;j<m/2;j++,k++)
			a[i+j]=c[k];}
			if(x<0)
			{
			for(j=i+m/2+x;j<=cnt-1+x;j++)
			a[j]=a[j-x];
			
			for(j=-m/2,k=0;k<n;k++,j++)
			a[i+j]=c[k];
			cnt=cnt+x;
		}}
	
flag++;}}   
	   a[cnt]='\0';
		 if(flag>0){ printf("\nThe entered text after replacement is:\n\n\t");puts(a);}
		 else
		 printf("\n\tSorry.The searched word/phrase is not found\n");
		   getch();
	}
	
		   	
		   	
		   	
		   	
		   	
		   	
		   	
		   	
		   	
		   	
		   	
		   	
		   	
		   	
		   	
		   	
		   	
