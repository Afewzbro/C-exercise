#include<iostream>
using namespace std;
int main(){
    int n,r;
    int i,j,k;
    double result,permutation=1,combination=1;
    char ch;
    cout<<"enter the number n and r respectively : "<<endl;
    cin>>n>>r;
    cout<<"enter the first latter of the opration you want below combination or permutation?";
    cin>>ch;
    cout<<n<<r;
    if(ch=='p' || ch=='P'){
        for(i=n;i>0;i--){
            permutation*=i;
            
        }
        for (j=n-r;j>0;j--)
        {
            combination*=j;
        }
        
        result=permutation/combination;
        cout<<"The permutation of the given input is : "<<result;
    }else if(ch=='c' || ch=='C'){
        for(i=n;i>0;i--){
            permutation*=i;
        }
        for(j=n-r;j>0;j--){

            combination*=j;
        }
        for(k=r;k>0;k--){
            combination*=k;
        }
        result=permutation/combination;
        cout<<"The combination of the given input is : "<<result;
    }else
    cout<<"The operation you chose is not supported try to restart the code to try again!";
}