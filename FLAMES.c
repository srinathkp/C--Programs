#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
char a[20],b[20],e[10],c[40],d[40],*p;
	int i,sum,l,per,j,z,k,cnt,m,x,y;

int main()
{


	printf("\n\tEnter the name of the two persons..\n");
	gets(a);
	
	gets(b);
	p=a;
	for(i=0;a[i]!='\0';i++)
	{
		while(p[i]==' ')
		p++;
	    a[i]=p[i];
   }
	p=b;
	for(i=0;b[i]!='\0';i++)
	{
		while(p[i]==' ')
		p++;
	    b[i]=p[i];
   }
	
	
		x=strlen(a);
	y=strlen(b);
	
	for(i=0;i<x;i++)
	{
		for(j=0;j<y;j++)
		{
			if(a[i]==b[j])
			{
				printf("%c",a[i]);
				for(k=i;k<x-1;k++)
				 a[k]=a[k+1];
				for(k=j;k<y-1;k++)
				b[k]=b[k+1];
				a[x-1]='\0';i--;
				x--;
				b[y-1]='\0';
				y--;
				printf("%d ",x+y);
				break;
			}
		}
      }
      sum=x+y;
      printf("\n%d\n",sum);
      strcpy(c,"FLAMES");
      z=strlen(c);
      printf("%d",z);
      while(z!=1)
      { 
       	if(sum%z==0)
       	  { k=z;cnt=0;}
		 else
		 {k=sum%z-1;  
		 cnt=k;}
		for(;k<z-1;k++)
      	 {
		   c[k]=c[k+1];
		   }
      	c[z-1]='\0';
		  z=strlen(c);
		  if(cnt)
		  {
		  for(i=1,k=z;i<=cnt;k++,i++)
		  c[k]=c[i-1];
      	for(i=0;i<z;i++)
      	c[i]=c[i+cnt];
      	c[z]='\0';}
      
	  printf("%s",c);
      z=strlen(c);
      printf("%d",z);
      }srand(time(0));
         printf("\n\n%s\n\n",c);
         if(strcmp(c,"L")==0)
           {strcpy(c,"LoVe");
            per=rand()%21+60;}
         else if(strcmp(c,"A")==0)
		   {
		
		   strcpy(c,"Affection");
		   per=rand()%21+10;}
		  else if(strcmp(c,"M")==0)
		  {
		  strcpy(c,"Marriage");
		  per=rand()%21+80;}
		  else if( strcmp(c,"F")==0)
		  {
		  strcpy(c,"Friendship");
		  per=rand()%21+20;}
		  else if(strcmp(c,"E")==0)
		  {
		  strcpy(c,"Enemy");
		  per=rand()%6;
	     }
	     else
	     {
	     	strcpy(c,"Sister");
	     	per=rand()%21+40;
	     }
	
        printf("Your relationship with the other is %s\nLoVe PeRcEnTaGE is %d",c,per);
      	printf("\n\nDo u want to continue...?..\n\n");
		  gets(e);
		  if(strcmp(e,"yes")==0 || strcmp(e,"Y")==0 || strcmp(e,"Yes")==0 || strcmp(e,"YES")==0 || strcmp(e,"y")==0) main();
		  
      }
      	
