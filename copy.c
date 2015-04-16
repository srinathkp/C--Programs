 #include<stdio.h>
int main(){
  unsigned long int a[1000000],*p,i,j,k,size,n;
  
  scanf("%lu",&n);

  for(i=0;i<n;i++)
    scanf("%lu",&a[i]);
  size=n;
  p=a;
  for(i=0;i<size;i++){
    for(j=0;j<size;j++){
         if(i==j){
             continue;
         }
         else if(*(p+i)==*(p+j)){
             k=j;
             size--;
             while(k < size){
                 *(p+k)=*(p+k+1);
                 k++;
              }
              j=0;
          }
      }
  }
 
    printf("%lu",size);
  
  return 0;
}
