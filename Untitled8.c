#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
unsigned long int a1,b1,a2,b2,sum,m,n,cnt=0;
  scanf("%lu %lu %lu %lu",&a1,&b1,&a2,&b2);
    m=a1*b1;n=a2*b2;
    if(m>n)
        {
       while(m%(n)!=0 )
           {
           if(m%3==0 && m%2!=0)
               {
               m=2*m/3;cnt++;
           }
           if(m%2==0 && m%3!=0)
           {m=m/2;cnt++;
       }
       if(m%3==0 && m%2==0)
       {
       	if((m/2)%n==0)
       	  m=m/2;
       	 else
			m=2*m/3; 
       	cnt++;
    }
   }
   if(m%n==0 && (m/n==2||m/n==3))
      cnt++;
   } else{
m=m+n;n=m-n;m=m-n;
   while(m%(n)!=0 )
           {
           if(m%3==0 && m%2!=0)
               {
               m=2*m/3;cnt++;
           }
           if(m%2==0 && m%3!=0)
           {m=m/2;cnt++;
       }
       if(m%3==0 && m%2==0)
       {
       	if((m/2)%n==0)
       	  m=m/2;
       	 else
			m=2*m/3; 
       	cnt++;
    }
   }
   
   if(m%n==0 && (m/n==2||m/n==3))
      cnt++;


}

printf("%lu",cnt);
        
        
        
        return 0;
}

