#include<iostream>
#include<cstring>
#include<string.h>
#include <conio.h>
#include <stdio.h>
using namespace std;
class Personel{
    public:
        virtual void maasGoster(){
            
        }
};
class Ogretmen : public Personel{
    private:
        double maas,ekders;
        string adisoyadi;
        double tckimlik;
        void maasGoster(){
            maas=(maas+ekders)*0.8;
            cout<<"This Teacher named "<<adisoyadi<<" have salary of : "<<maas<<"tl.";
        }
    public :
        Ogretmen(string adi,double tc,double ma,double ek){
            adisoyadi=adi;
            tckimlik=tc;
            maas=ma;
            ekders=ek;
        }
};
class Memur : public Personel{
    private:
        double maas;
        string gorevyeri;
        string adisoyadi;
        double tckimlik;
        void maasGoster(){
            maas=maas*0.85;
            cout<<"This Director named "<<adisoyadi<<" have salary of : "<<maas<<"tl.";
        }
    public :
        Memur(string adi,double tc,double ma,string yeri){
            adisoyadi=adi;
            tckimlik=tc;
            maas=ma;
            gorevyeri=yeri;
        }
};
int main(){
    Ogretmen ogretmen("testi abdulwasi",99816087480,15000,5000);
    Personel* employee=&ogretmen;
    
    employee->maasGoster();
    
    Memur memur("Mr. Afendi",5339494,95000,"Ethiopia");
    Personel* director=&memur;
    director->maasGoster();
    return 0;
}