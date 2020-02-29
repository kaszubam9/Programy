#include<iostream>
#include<math.h>
using namespace std;

class Circle{
private:
    float r;
    float obwod;
    float pole;
public:

Circle(){
    r=9;
    pole=M_PI*M_PI*r;    
    obwod=M_PI*r*2;
}
Circle(float rad) : r(rad),pole(M_PI*M_PI*rad),obwod(M_PI*rad*2){       
};

void print(){
    cout<<" R: "<<r<<endl<<" O: "<<obwod<<endl<<" P: "<<pole<<endl;
}
};

int main(){

Circle c1(4);

c1.print();

return 0;
}