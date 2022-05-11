#include<iostream>
#include<string>
#include<cstring>
using namespace std;
int main(){
    //adiniz yazip kalp sekilde cikaracak
    
    int size,i,j,k=0;
    string name;
    char name_array[100];

    
    cout<<"enter the name :";
    getline(cin,name);
    strcpy(name_array, name.c_str());
    cout<<"enter the size of a heart : ";
    cin>>size;
    
    for(i=size/2;i<size;i+=2){
        for ( j = 1; j < size-i; j+=2)
        {
            cout<<" ";
        }
        for ( j = 1; j < i+1; j++)
        {
            
        cout<<name[k];
        k++;
        }
        for(j=1;j<size-i+1;j++){
        cout<<" ";
        }
        k=0;
        for(j=1;j<i+1;j++){
            
            
        cout<<name[k];
        k++;
        }
        cout<<endl;
    }

    for(i=size;i>0;i--){k=0;
        for(j=0;j<size-i;j++){
            cout<<" ";
        }
        for(j=1;j<i*2;j++){
            
            
            cout<<name[k];
            k++;
        }
        cout<<endl;
    }
}