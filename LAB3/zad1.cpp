#include <iostream>
#include <stdio.h>
using namespace std;

class Vector {
public:
    Vector(double);
    Vector(double, double);
    Vector(double, double, double);
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

int main()
{
    Vector r1(1.0);
    cout << "Obiekt klasy Vector o wymiarze:" << r1.w << endl;
    Vector r2(3,10.2);
    cout << "Obiekt klasy Vector o wymiarze:" << r2.w << endl;
    Vector r3(1.0,4.6,2);
    cout << "Obiekt klasy Vector o wymiarze:" << r3.w << endl;
   
    return 0;
}