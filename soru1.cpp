#include<iostream>
#include<string>
#include<cstring>
#include <conio.h>
#include <stdio.h>
using namespace std;
int main(){
    //adiniz kare icine yazmak disi yildiz
    int size=0,k=0,i=0,alph=0;
    string name;
    char name_array[100];

    
    cout<<"enter the name :";
    getline(cin,name);
    strcpy(name_array, name.c_str());
    size=name.length()+2;
    
    for (int i = 0; i < size; i++) {

      for (int j = 0; j < size; j++) {

        if (i == 0 || i == size - 1) {
          cout<<"*";
        }
        else {

          if (j == 0 || j == size - 1) {
            cout<<"*";
          }
          else {
              
            cout<<name[j-1];
          }
        }
      }
      cout<<endl;
    }
  }
