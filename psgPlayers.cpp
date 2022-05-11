#include<iostream>
#include<string>
using namespace std;
enum PlayerPosition{
    st,rw,lw,rm,cm,lm,lb,cb,rb,gk
};
struct players
{
    int rank;
    PlayerPosition position;
};
int main(){
//     while(ch!='\r'){
//         ch=_getwche();
//         ch=getche();
//     }
    int pos;
    players messi = {93,rw};
    players mbappe = {91,st};
    players neymar = {91,lw};
    players veratie = {89,cm};
    players parades = {87,rm};
    players perera = {86,lm};
    players mendes= {85,lb};
    players kimpembe = {88,cb};
    players marquines = {89,cb};
    players hakimi = {86,rb};
    players navas = {90,gk};

cout << "where dose mbappe playes"<<endl;
cin>>pos;
if(pos ==mbappe.rank){
    cout<<"hurry correct answer";
}else{
    cout<<"messi was ghosted in realmadrid match";
}

}
