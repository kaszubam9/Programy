#include <iostream>
using namespace std;

class student
{
public:
    void printOpis();	
    student();
    string Opis_ = "student grupy";
};

class starosta : public student
{
public:
    void printOpis();
    string Opis_ = "starosta grupy";
};

student::student()
{
    cout << "Tworzenie obiektu klasy student o nazwie: " << Opis_ << endl;
}

void student::printOpis()
{
    cout << "Opis: " << Opis_ << endl;
}

void starosta::printOpis()
{
    cout << "Opis: " << Opis_ << endl;
}

int main()
{
    student stud;
    stud.printOpis();
    starosta star;
    star.printOpis();
    return 0;
}