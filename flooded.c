#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void f(int i,int j);

	int a[10][10],b,c,d,i,j,k,sum,m,n,c,d,cnt=0,x,y,z=0;
void f(int i,int j)
{  
	if((i-1)!=0)
	a[i-1][j]=0;
	
	if((i+1)!=m+1)
	a[i+1][j]=0;
	
	if((j-1)!=0)
	a[i][j-1]=0;
	
	if((j+1)!=n+1)
	a[i][j+1]=0;
	
	
    
	k=0;
		for(x=1;x<m+1;x++)
	{
		for(y=1;y<n+1;y++)
		{
			if(a[x][y]==1)
			   {k=1;}
	    }
    }

    if(k!=0)
    {   
    	
	if((i-1)!=0)
	f(i-1,j);
	
	if((i+1)!=m+1)
	f(i+1,j);
	
	if((j-1)!=0)
	f(i,j-1);
	
	if((j+1)!=n+1) f(i,j+1); cnt++;printf("%d",cnt);
}
else
{   
	printf("%d",cnt+1);
	abort();
	}
	
}

int main()
{
	scanf("%d %d",&m,&n);
	scanf("%d %d",&c,&d);
printf("%d.%d.%d.%d",m,n,c,d);
	for(x=1;x<m+1;x++)
	{
		for(y=1;y<n+1;y++)
		{
			a[x][y]=1;printf("%d",a[x][y]);
	    }
    }
    i=c;
    j=d;
    
    f(c,d);
    return 0;
}
    
