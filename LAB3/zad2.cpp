#include <iostream>
#include <stdio.h>
using namespace std;

class Vector {
public:
    Vector(double);
    Vector(double, double);
    Vector(double, double, double);
    void show();
    void show(Vector);
    int w;
private:
    double d[3] = { 0, 0, 0 };
};

Vector::Vector(double e1)
{
    cout << "\nTworzenie obiektu klasy Vector w przestrzeni R1 :" << endl;
    w=1;
    d[0] = e1;

}
Vector::Vector(double e1, double e2)
{
    cout << "\nTworzenie obiektu klasy Vector w przestrzeni R2 :" << endl;
    w=2;
    d[0] = e1; d[1]=e2;

}
Vector::Vector(double e1, double e2, double e3)
{
    cout << "\nTworzenie obiektu klasy Vector w przestrzeni R3 :" << endl;
    w=3;
    d[0] = e1; d[1]=e2; d[2]=e3;

}

void Vector::show(){
    cout<<"\n Wspolrzedne wektora o wymiarze: "<<w<<endl;
    for(int i=0;i<w;i++){
        cout<<d[i]<<endl;
    }
}
void Vector::show(Vector r){
    cout<<"\n Wspolrzedne wektora o wymiarze: "<<r.w<<endl;
    for(int i=0;i<r.w;i++){
        cout<<r.d[i]<<endl;
    }
}

int main()
{

    Vector r2(3,10.2);
    cout << "Obiekt klasy Vector o wymiarze:" << r2.w << endl;
    Vector r3(1.0,4.6,2);
    cout << "Obiekt klasy Vector o wymiarze:" << r3.w << endl;
    r2.show();
    r2.show(r3);
   
    return 0;   
}