#include<iostream>
 
using namespace std;
 
int main()
{
int i,j,k,n;
int a[]={1,5,2,6,8,9,1,1,10,3,2,4,1,3,11,3};
n=16;

for(i=0;i<n;++i)
for(j=i+1;j<n;)
{
if(a[i]==a[j])
{
for(k=j;k<n-1;++k)
a[k]=a[k+1];
--n;
}
else
++j;
}
cout<<"\n";
for(i=0;i<n;++i)
cout<<a[i]<<" ";
 
return 0;
}