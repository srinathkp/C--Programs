#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	char a[1000000],b[1000000];
	int i,cnt=0,k,l,j,m,c=0;
	scanf("%s",a);
	k=strlen(a);
	printf("%d",k);
	for(i=0,j=k-1;i<k;i++,j--)
	  b[i]=a[j];
	 puts(a);
	 puts(b);
	 l=k;m=k;
	 for(i=0;i<=l/2;i++)
	 {
	 if(a[i]!=a[l-1-i])
	   {
	   	if(cnt==0)
	     {printf("%c-%c",a[i],a[l-1-i]);i--;l=l-1;cnt++;}
	     else
	      {printf("%d,%c-%c",i,a[i],a[l-1-i]);cnt=2;break;}
	 }
}
	 for(i=0;i<=m/2;i++)
	 {
	 if(b[i]!=b[m-1-i])
	   {if(c==0)
	    {i--; m=m-1;c++;}
	 else
	    {
		c=2;break;}
	 }
}
if(cnt==1 || c==1)
{
	printf("YES");
}

else
{
printf("%d-%d",cnt,c);	printf("NO");
}

return 0;
getch();
}
	
