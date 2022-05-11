
#include<iostream>



using namespace std;
int main(){
    int gd= DETECT ,gm;
    initgraph(-gd,-gm, "C:\\TC\\BIG");
    rectangle(100,100,200,200);
    getch();
    closegraph();
    return 0;
}