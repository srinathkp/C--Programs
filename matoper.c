#include<stdio.h>
#include<conio.h>

int ma[10][10],ms[10][10],num,opt,a[10][10],b[10][10],c[10][10],i,j,k,sum=0,d,d1,e1,e;
void product();
void add();
void sub();
void main()
{

printf("Enter the no. of rows n clmns of A ..\n");
scanf("%d%d",&d,&d1);
printf("Enter the no. of rows n columns of B..\n");
scanf("%d%d",&e,&e1);
printf("ENTER A..\n");
for(i=0;i<d;i++)
{
for(j=0;j<d1;j++)
scanf("%d",&a[i][j]);
}
printf("ENTER B..\n");

for(i=0;i<e;i++)
{
for(j=0;j<e1;j++)
scanf("%d",&b[i][j]);
}
printf("Select the operation to be performed..\n1.ADDITION\n2.Subtraction\n3.Multiplication\n");
scanf("%d",&opt);
switch(opt)
{
	case 1:
		add();
		main();
		break;
    case 2:
	    sub();
		main();
		break;
	case 3:
	    product();
		main();
		break;
	default:			
        printf("Select a valid one please....!!!\n");
}



getch();

}
void product()
{
if(d1!=e)
printf("SORRY.CAN'T MULTIPLY.....!!!");
else
printf("THE PRODUCT OF A AND B IS..\n");
for(i=0;i<d;i++)
{
 for(j=0;j<e1;j++)
 {
  for(num=0;num<d1;num++)
    {sum+=a[i][num]*b[num][j];}
  c[i][j]=sum;
  sum=0;
  printf("%d ",c[i][j]);
 }
  printf("\n");
}
}
 
void add()
{
	if(d!=e || d1!=e1)
	printf("Can't Add...Dimensions mismatch error....!!!!!'");
	else{
	
	for(i=0;i<d;i++)
     {
       for(j=0;j<d1;j++)
         {
        
          ma[i][j]=a[i][j]+b[i][j];
          printf("%d ",ma[i][j]);
		 }printf("\n");
     }
 }
} 
 
 void sub()
 {
 		if(d!=e || d1!=e1)
	printf("Can't Subtract....Dimensions mismatch error....!!!!!'");
	else{
	for(i=0;i<d;i++)
     {
       for(j=0;j<d1;j++)
         {
          
          ms[i][j]=a[i][j]-b[i][j];
          printf("%d",ms[i][j]);
		 }printf("\n");
     }
    }
 }
