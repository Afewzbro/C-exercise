#include<iostream>

using namespace std;
int main(){
    int onKurus=0,yirmibesKurus=0,elliKurus=0,besKurus=0,birKurus=0,tl,kurus,para=0;

    cout<<"paraya  miktar giriniz"<<endl;

    cout<<"LIRA : ";

    cin>>tl;

    cout<<"\nKURUS : ";

    cin>>kurus;

    para=(tl*100)+kurus;

    while(para>=50){
        para-=50;
        elliKurus++;
    }
    while (para>=25){
        para-=25;
        yirmibesKurus++;
    }
    while(para>=10){
        para-=10;
        onKurus++;
    }
    while(para>=5){
        para-=5;
        besKurus++;
    }
    while(para>0){
        para-=1;
        birKurus++;
    }

    cout<<"PARA MIKTARLARI"<<endl<<"50 KURUS : "<<elliKurus<<endl<<"25 KURUS : "<<yirmibesKurus<<endl
    <<"10 KURUS : "<<onKurus<<endl<<"5 KURUS : "<<besKurus<<endl<<"1 KURUS : "<<birKurus;
    
    
}