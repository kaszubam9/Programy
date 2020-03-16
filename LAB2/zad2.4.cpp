#include<iostream>
#include<math.h>
using namespace std;

class Circle{
public:
    float r;
    float obwod();
    float pole();
};

float Circle::obwod(){
    float o=M_PI*r*2;
    return o;
}

float Circle::pole(){
    float p=M_PI*M_PI*r;
    return p;
}



int main(){

Circle c1,c2;
c1.r=10;
c2.r=20;

cout<<"Radius1: "<<c1.r<<endl<<"Radius2: "<<c2.r;
cout<<endl<<"Pole1: "<<c1.pole()<<endl<<"Obwod2: "<<c2.obwod()<<endl;

return 0;
}