#include<iostream>
using namespace std;
int main(){
    char ch;
    int asci;
    cout<<"enter the character you want to change to ASCI : ";
    cin>>ch;

    asci=(int)ch;

    cout<<"The character "<<ch<<" ASCI is : "<<asci;
    return 0;
}