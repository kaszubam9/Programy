#include<iostream>
using namespace std;

class Circle{
public:
    float* r;

Circle(float rad){
    this->r=new float(rad);
}

~Circle(){
   delete this->r;
}

};


int main(){

Circle c1(21.64);

cout<<"Radius: "<<*(c1.r)<<endl;

return 0;
}