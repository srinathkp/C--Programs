#include<stdio.h>
#include<conio.h>
int main()
{
	int i,n,j,c1=0,c2=0,diag=0,a[5][5];
	printf("Enter the order of the matrix\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
		scanf("%d",&a[i][j]);
			if(j>i && a[i][j]==0)
			c1++;
			else if(i>j && a[i][j]==0)
			c2++;
			else if(i==j && a[i][j]==0)
			diag++;
      	 }
    }
    
    if((c1==((n*n-n)*0.5) && c2!=c1 && diag!=n) || (c2==((n*n-n)*0.5) && c1!=c2 && diag!=n))
         printf("Yes\n");
	else
	printf("No..\n");
	
	getch();
	return 0;
}
