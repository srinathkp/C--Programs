#include <stdio.h>



int main() {
   unsigned long int n,i,j,k,cnt1=0,a[1000000];
    int cnt=0;
    scanf("%lu",&n);
    
    for(i=0;i<n;i++)
        {
        
     scanf("%lu",&a[i]);
          
       }
                              
     for(i=0;i<n;i++)
	 {
	   for(j=0;j<i;j++) 
        {
        	if(a[i]==a[j])
        	{for(k=i;k<n-1;k++)
			   a[k]=a[k+1];
			 n=n-1;}
        }
   }       
   printf("%lu",n);
   
    return 0;
    
}

