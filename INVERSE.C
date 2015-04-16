#include<stdio.h>
#include<conio.h>
#include<math.h>
main()
{
int a[3][3],i,j,k,adj[3][3],l,co[3][3],k1,l1;
float ainv[3][3],det;
printf("Enter the elements of 3x3 matrix.....\n");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
scanf("%d",&a[i][j]);
}
printf("The Cofactor matrix of A is:\n");
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
printf("%d ",co[i][j]);
}
printf("\n");
}
printf("The adjoint of the matrix A is \n");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
adj[i][j]=co[j][i];
printf("%d ",adj[i][j]);
}
printf("\n");
}
printf("The inverse of the matrix A is \n");
det=a[0][0]*co[0][0]+a[0][1]*co[0][1]+a[0][2]*co[0][2];
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
ainv[i][j]=adj[i][j]/det;
printf("%.2f ",ainv[i][j]);
}
printf("\n");
}
getch();
}
