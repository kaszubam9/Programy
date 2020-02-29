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
    cout<<"R: "<<r<<endl<<"O: "<<obwod<<endl<<"P: "<<pole<<endl;
}
void set(float rad){
    cout<<endl<<"Setting radius at: "<<rad<<endl;
    r=rad;
    pole=M_PI*M_PI*rad;    
    obwod=M_PI*rad*2;
}
void get(){
    cout<<"\nRadius: "<<r<<endl<<endl;
}
};

int main(){

Circle c1(4);

c1.get();

c1.print();
c1.set(10);
c1.get();

return 0;
}