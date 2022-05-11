#include<iostream>
#include<math.h>
using namespace std;
struct coordinates
{
    int x,y;
};
struct coordinateCal
{
    coordinates point1,point2;
};
int main(){
    coordinateCal cal;
    int xCoordinate,yCoordinate;
    double result,distance;
    cout<<"enter the coordinates of point1\n x : ";
    cin>>cal.point1.x;
    cout<<"y : "<<endl;cin>>cal.point1.y;
    cout<<"enter the coordinates of point 2\n x : ";
    cin>>cal.point2.x;
    cout<<"y : "<<endl;cin>>cal.point2.y;
    yCoordinate=cal.point1.y - cal.point2.y;
    xCoordinate=cal.point1.x - cal.point2.x;
    result=pow(yCoordinate,2)+pow(xCoordinate,2);
    distance=sqrt(result);
    cout<<"The distance between those coordinate is : "<<distance;
    
}

