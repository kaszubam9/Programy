#include<iostream>

using namespace std;

class Circle{
public:
    float r;
Circle(){
    r=1.45;
}
Circle(float rad){
r=rad;
}

};

int main(){

Circle c1;
Circle c2(21.54);

cout<<"Radius1: "<<c1.r<<endl<<"Radius2: "<<c2.r;

return 0;
}