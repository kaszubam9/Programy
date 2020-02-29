#include<iostream>
using namespace std;

class Circle{
public:
    float r;
};

int main(){

Circle c1,c2;
c1.r=10;
c2.r=20;

cout<<"Radius1: "<<c1.r<<endl<<"Radius2: "<<c2.r;

return 0;
}