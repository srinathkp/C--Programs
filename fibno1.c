#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
unsigned int i,t,m,n,*r,j,s;

 unsigned int f(unsigned int s) 
      {
      if(s==0)
          {
          return 1;
      }
     unsigned int fact=s;
      for(j=1;j<s;j++)
          fact=fact*j;
   /*  printf("%u.\n",fact);*/
      return fact;
  
  }

int main() {
 scanf("%u",&t);
  r=(unsigned int *)malloc(sizeof(unsigned int)*t);
   for(i=0;i<t;i++)
       {
       scanf("%u %u",&m,&n);
       if((m%2==0 && n<m/2+1)||((m%2==1) && n<=m/2+1)){
          /* printf("%u-%u",m,n);*/
           *(r+i)=f(m)-(f(m-n)*f(n)*(m-1));}
       else{
           *(r+i)=0;
       }
       }
    for(i=0;i<t;i++)
        {
        printf("%u \n",*(r+i));
    }
 

    
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}

