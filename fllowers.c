#include<iostream.h>
#include<conio.h>
int main()

{
	int i,j,n,k,l,a[10],b,c[10],d,temp;
	cout<<"No of flowers";
	cin>>n;
	cout<<"No. of persons??";
	cin>>k;
	cout<<"Enter the cost of the flowers";
	for(i=0;i<n;i++)
	{
		cin>>c[i];
    }
    for(i=0;i<n;i++)
    {
    	for(j=i+1;j<n;j++)
    	{
    	if(c[i]<c[i+j]))
	{
		temp=c[i];
		c[i]=c[j+i];
		c[j+i]=temp;
	}}}
	count=0;
	for(i=0,j=0;i<n;i++,j++)
	{   count++;
		a[i]=c[j];
		sum+=sum
		if(count==1 && i%(n-1)==0)
		{
			
	
