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
    public :
        friend void show(Personel*,double);
        double maasValue(){
            return maas;
        }
        Personel(){
            cout<<"Enter your name and surname please :"<<endl;
            getline(cin,adsoyad);
            cout<<"Enter your identity number :"<<endl;
            cin>>tckimlik;
            cout<<"Enter your salary : "<<endl;
            cin>>maas;
        }
        virtual void set(string a,double b,double c){
            adsoyad=a;
            tckimlik=b;
            maas=c;
        }
        virtual double maasGoster();
};
class Ogretmen : public Personel{
    private :
        int ekders;
    public :
        Ogretmen(){
            cout<<"Enter additional lesson :"<<endl;
            cin>>ekders;
        }
        void set(int d){
            ekders=d;
        }
        void maasGoster(Personel* o){
            double m;
            o.maas
        }

};
class Memur : public Personel{
    private:
        string gorevYeri;
    public :
        void set
};
