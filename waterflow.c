#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
  int t,m,n,i,j,k,r[100],l;
    scanf("%d",&t);
    for(l=0;l<t;l++)
        {
        k=4;
        scanf("%d %d",&m,&n);
        /*printf("\n");*/
        scanf("%d %d",&i,&j);
        if(m==1 && n==1){ r[l]=0;break;}
        else{if(i==m)
            {
            k=k-2;
            }
        else if(i==1){
            k=k-1;
        }
        if(j==n)
            {
            k=k-2;
        }else if(j==1)
            {
            k=k-1;
        }
        /*printf("\n%d.-%d \n",k,l);*/
        r[l]=(m*n-(1+k))/k +1;
            }}
        for(i=0;i<t;i++)
            {
            printf("%d\n",r[i]);}
        
        
    
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}

