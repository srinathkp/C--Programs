#include<stdio.h>
#include<conio.h>
main()
{

int num,a[10][10],b[10][10],c[10][10],i,j,k,sum=0,d,e;
clrscr();
printf("Enter the no. of rows of A AND B..\n");
scanf("%d",&d);
printf("Enter the no. of columns of A and B..\n");
scanf("%d",&e);
printf("ENTER A..\n");
for(i=0;i<d;i++)
{
for(j=0;j<e;j++)
scanf("%d",&a[i][j]);
}
printf("ENTER B..\n");

for(i=0;i<d;i++)
{
for(j=0;j<e;j++)
scanf("%d",&b[i][j]);
}
printf("THE PRODUCT OF A AND B IS..\n");
for(i=0;i<d;i++)
{
for(j=0;j<e;j++)
{
for(num=0;num<d;num++)
    {sum+=a[i][num]*b[num][j];}
  c[i][j]=sum;
  sum=0;
printf("%d ",c[i][j]);
}
printf("\n");
  }getch();
  }