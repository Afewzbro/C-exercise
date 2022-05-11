#include<iostream>
#include<cstring>
#include<string.h>
#include <conio.h>
#include <stdio.h>
using namespace std;
class Personel{
    private :
        string adsoyad;
        double tckimlik,maas;
    class Ogretmen{
        private:
            string ekders;
        public:
            void input(Personel *a,Personel *b,Personel *c){
                cout<<"Enter your name and surname please :"<<endl;
                getline(cin,a->adsoyad);
                cout<<"Enter your identity number :"<<endl;
                cin>>b->tckimlik;
                cout<<"Enter your salary : "<<endl;
                cin>>a->maas;
                cout<<"Enter additional lesson :"<<endl;
                getline(cin,ekders);
            }
                        
    };
    class Memur{
        private :
            string gorevyeri;
        void input(Personel *e,Personel *f,Personel *g, string h){
                cout<<"Enter your name and surname please :"<<endl;
                getline(cin,e->adsoyad);
                cout<<"Enter your identity number :"<<endl;
                cin>>f->tckimlik;
                cout<<"Enter your salary : "<<endl;
                cin>>g->maas;
                maas=maas*0.85;
                cout<<"Enter the place of work :"<<endl;
                getline(cin,gorevyeri);
            }
    };
    void maasGoster(){
        cout<<"Employyee named "<<adsoyad<<" gets salary of "<<
    }

};
int main(){
    
    
}