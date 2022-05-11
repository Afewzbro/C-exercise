#include<iostream>
using namespace std;
int main(){
    int i,size,j;
    cout<<"enterrthe szie of x Design : ";
    cin>>size;
    for(i=0;i<size;i++){
        for(j=0;j<size;j++){
            if (i==j || i+j==size-1){
                cout<<"*";
            }else{
                cout<<" ";
            }
            
        }
        cout<<endl;
    }
}