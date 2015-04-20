#include<stdio.h>
#include<conio.h>
main()
{
	int a,b,c,d,g,g1;
	printf("enter the numbers\n");
	scanf("%d%d",&a,&b);
	if(a!=-1 && b!=-1)
	 {
	if(a>b)
	   {g=a;g1=b;
	   }
	 else{g=b;g1=b;
	 }
	 }
	 else if(a!=1 && b==-1)
	 {g=a;
	 printf("The number entered is %d\n",a);
	 }
	else
	{
	printf("you have not entered any number\n");}
	for(d=1;;d++)
	{
		scanf("%d",&c);
		if(c!=-1){
		
		if(g<c)
		 {
		 	g1=g;
		 	g=c;
		 }
		 else if(g>c && g1<c)
		 {
		 	g1=c;
		 }}
		 else
		 break;
		 
	}
	printf("The second largest number in the given sequence is %d\n",g1);getch();
	
}
