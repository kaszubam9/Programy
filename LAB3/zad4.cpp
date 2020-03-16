#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;

class Vector {
public:
    Vector(double);
    Vector(double, double);
    Vector(double, double, double);
    friend double m(Vector);
    double m();
    int w;
    private:
    double d[3] = { 0, 0, 0 };
};

Vector::Vector(double e1)
{
    cout << "\n Tworzenie obiektu klasy Vector w przestrzeni R1 :" << endl;
    w=1;
    d[0] = e1;

}
Vector::Vector(double e1, double e2)
{
    cout << "\n Tworzenie obiektu klasy Vector w przestrzeni R2 :" << endl;
    w=2;
    d[0] = e1; d[1]=e2;

}
Vector::Vector(double e1, double e2, double e3)
{
    cout << "\nTworzenie obiektu klasy Vector w przestrzeni R3 :" << endl;
    w=3;
    d[0] = e1; d[1]=e2; d[2]=e3;

}

double m(Vector w){
    
    return (sqrt(w.d[0]*w.d[0]+w.d[1]*w.d[1]+w.d[2]*w.d[2]));
}

double Vector::m(){
    return sqrt(d[0]*d[0]+d[1]*d[1]+d[2]*d[2]);
}

int main()
{
    
    Vector r2(3,10.2);
    cout << "Obiekt klasy Vector o wymiarze:" << r2.w << endl;
    Vector r3(7.1,4.6,2);
    cout << "Obiekt klasy Vector o wymiarze:" << r3.w << endl<<endl;
    cout<< "Obliczanie dlugosci wektora w przestrzeni R3 przez funkcje: "<<m(r3)<<endl;
    cout<<"\nObliczanie dlugosci wektora w przestrzeni R3 przez metode: "<<r3.m()<<endl;
    
    return 0;
}