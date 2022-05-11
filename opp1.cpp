#include<iostream>
using namespace std;
class smalljob{
    private : 
        int data;
    public :
        void setdata(int d){
            data=d;
        }
        void showdata(){
            cout<<data;
        }
};
int main(){
    smalljob s1,s2;

    s1.setdata(100);
    s2.setdata(14);

    s1.showdata();
    s2.showdata();
    return 0;
    
}