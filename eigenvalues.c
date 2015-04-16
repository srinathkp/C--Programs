#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
	int a[3][3],i,j,x,y=0,z,k,k1,l,l1,co[3][3],det;
	printf("Enter the 3x3 matrix to which eigen values are to be found...\n\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		scanf("%d",&a[i][j]);
    }
  for(i=0;i<3;i++)
{
for(j=0;j<3;j++) 
{
if(i==0)
{
	k=1;
	k1=2;
}
else if(i==1)
{
	k=0;
	k1=2;
}
else
{k=0;
k1=1;
}
if(j==0)
{
	l=1;l1=2;
}
else if(j==1)
{
	l=0;l1=2;
}
else
{
l=0;l1=1;
}
co[i][j]=pow(-1,i+j)*(a[k][l]*a[k1][l1]-a[k][l1]*a[k1][l]);

}  }
det=a[0][0]*co[0][0]+a[0][1]*co[0][1]+a[0][2]*co[0][2];

printf("The eigen values of the given matrix are....");
	if(det==0)
	{printf("\n0");y++;}
	if((co[0][0]+co[1][1]+co[2][2]==0))
	{printf("\n0");y++;}
	
for(x=1;;x++)

{
	if(y==3)
	break;
	if((x*x*x-(a[0][0]+a[1][1]+a[2][2])*x*x+(co[0][0]+co[1][1]+co[2][2])*x-det)==0)
	{
		printf("\n%d",x);
		y++;
	}
	
}
getch();
}
