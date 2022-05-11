#include<iostream>
using namespace std;
struct Time{
        int hr,min,sec;
    };
struct TimeTable{
    Time start;
    Time finish;
};
int main(){
  TimeTable algorithm;
  algorithm.start.hr=8;
  algorithm.start.min=15;
  algorithm.start.sec=00;
  algorithm.finish.hr=10;
  algorithm.finish.min=00;
  algorithm.finish.sec=00;

  cout<<"Algorithm class starts at = " << algorithm.start.hr<<":"<<algorithm.start.min<<":"<<algorithm.start.sec<<endl;
  cout<<"Algorithm class finishes at = " << algorithm.finish.hr<<":"<<algorithm.finish.min<<":"<<algorithm.finish.sec;
  return 0; 
    
    
}