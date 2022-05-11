#include<iostream>
using namespace std;


int square(int l);
int rectangle(int l,int w);
int circle(int r);
int main(){
    char ch;
    int l,w,r,area;
    cout<<"enter the starting latter of the shape you want its area : ";cin>>ch;
    if(ch=='s' || ch=='S'){
        cout<<"enter the length of square : ";cin>>l;
        area=square(l);
        cout<<"The area of square is : "<<area;
    }else if(ch=='r' || ch=='R'){
            cout<<"enter the length and width of rectangle : ";cin>>l,w;
            area=rectangle(l,w);
            cout<<"The area of rectangle is : "<<area;
    }else if(ch=='c' || ch=='C'){
        cout<<"enter the radius of the circle : ";cin>>r;
        area=circle(r);
        cout<<"The area of a circle is : "<<area;
    }else
    cout<<"we dont support that service";
}
int square(int l){
    int square=l*l;
    return square;
}
int rectangle(int l,int w){
    return l*w;
}
int circle(int r){
    return r*r*3;
}
