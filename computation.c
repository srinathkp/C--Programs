#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


unsigned long int f(unsigned long int a,unsigned long int b);

unsigned long int f(unsigned long int a,unsigned long int b)
    {
    	unsigned long int i,temp=0;
    if(b==0){ return 1;}
    else{
        for(i=0;i<=a;i++)
            {
            temp=temp+f(a-i,b-1);
            /*printf("%lu ",temp);*/
        }return temp;
    }
}

int main() {
unsigned long int q,j,x,y,*r;
    
    scanf("%lu",&q);
    r=(unsigned long int *)malloc(sizeof(unsigned long int)*q);
    
    for(j=0;j<q;j++)
        {
        scanf("%lu %lu",&x,&y);
        
        *(r+j)=f(x,y);
                

    }
    for(j=0;j<q;j++)
        {
        printf("\n%lu\n",*(r+j));
    }
    
    
    
    return 0;
}

