#include <iostream>
using namespace std;

class urzadzenie 
{
public:
    virtual int zapis(int id, string dane) = 0;
    virtual string odczyt(int id) = 0;
    virtual ~urzadzenie() {}
};

class dysk : public urzadzenie
{
private:
    int id_;
    string dane_;
public:
    dysk(int id);
    int zapis(int id, string dane);
    string odczyt(int id);
};

dysk::dysk(int id)
{
    cout << "Tworzenie obiektu klasy dysk " << endl;
    id_ = id;
}

int dysk::zapis(int id, string dane)
{
    if(id==id_){
    dane_ = dane;
    cout << "zapis danych: " << dane << endl;
    return 1;
}
    else{
        cout<< "Bledne id, przerwano zapis" <<endl;
        return -1;
    }
}
string dysk::odczyt(int id)
{
    if(id==id_){
        cout << "odczyt danych: " << dane_ << endl;
        return dane_;
    }
    else{
        cout<< "Bledne id, przerwano odczyt" <<endl;
        return dane_;
    }
}

int main()
{
    urzadzenie *u;

    dysk d1(7);
    u=&d1;
    u->zapis(7,"test 11");
    u->odczyt(7);
    cout<<"\n";
    dysk d2(10);
    u=&d2;
    u->zapis(7,"lab5");
    u->odczyt(7);

    return 0;
}