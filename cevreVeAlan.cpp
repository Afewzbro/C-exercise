#include<iostream>
using namespace std;
class CevreVeAlan{
    private :
        int length,width,radius, hieght,area,base;
        float pi=3.14;
    public : 
        void squareAreaPerimeter(int length)
        {
            cout<<"The area of Square is : "<<length*length<<endl;
            cout<<"The Perimeter of Square is : "<<4*length<<endl;
        }
        void rectangleAreaPerimeter(int length, int width){
            cout<<"The area of Rectangle is : "<<length*width<<endl;
            cout<<"The Perimeter of Rectangle is : "<<2*(length+width)<<endl;
        }
        void circleAreaPerimeter(int radius){
            cout<<"The area of Circle is : "<<radius*radius*pi<<endl;
            cout<<"The Perimeter of Circle is : "<<2*radius*pi<<endl;
        }
        void triangleAreaPerimeter(int heigth, int base){
            cout<<"The area of Triangle is : "<<heigth*base*0.5<<endl;
            cout<<"The Perimeter of Triangle is : "<<3*base<<endl;
        }
};

int main(){
    CevreVeAlan islem1,islem2,islem3,islem4;
    
    int length,width,radius, hieght,base;
    cout<<"Enter the length,width,radius,height and base respeectively "<<endl;
    cin>>length>>width>>radius>>hieght>>base;
    islem1.squareAreaPerimeter(length);
    islem2.rectangleAreaPerimeter(length,width);
    islem3.circleAreaPerimeter(radius);
    islem4.triangleAreaPerimeter(hieght,base);
    
}
