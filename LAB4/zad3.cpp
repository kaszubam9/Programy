#include <iostream>
using namespace std;

class student
{
private:
    string imie_nazwisko_ = "NO_NAME";
	unsigned int nr_indeksu_ = 0;
public:
    student(string imie_nazwisko, unsigned int nr_indeksu);
    string Opis_ = "student grupy";
    void printOpis();	
    void printDane()
    {
        cout << " Metoda printDane klasy bazowej" << endl;
		cout << " Imie i nazwisko: " << imie_nazwisko_ << endl;
		cout << " Nr indeksu: " << nr_indeksu_  << endl;
    }	
    string getName(){
        return imie_nazwisko_;
    }
    unsigned int getID(){
        return nr_indeksu_;
    }
};

class starosta : public student 
{
public:
    string email_ = "no@noemail";
    starosta(string imie_nazwisko, unsigned int nr_indeksu, string email);
    string Opis_ = "starosta grupy";
    void printOpis();
    void printDane()
    {
        cout << " Metoda printDane klasy pochodnej" << endl;
	    cout << " Imie i nazwisko: " << student::getName() << endl;
	    cout << " Nr indeksu: " << student::getID()<< endl;
        cout << " Email: " << email_<< endl;
    }
};

starosta::starosta(string imie_nazwisko, unsigned int nr_indeksu, string email) : 
  student(imie_nazwisko,  nr_indeksu), email_(email)
{
    cout << "Tworzenie obiektu klasy starosta o nazwie: " << Opis_ << endl;
}

student::student(string imie_nazwisko, unsigned int nr_indeksu) :
  imie_nazwisko_(imie_nazwisko) 
{
    nr_indeksu_ = nr_indeksu;
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
    student stud("Jan Kowalski",7);
    stud.printOpis();
    //cout << "Dane:" << stud.getName()<< " " << stud.getID() << endl;
    stud.printDane();
    starosta star("Aleksandra Nowak",999,"mail@nomail.dot");
    star.printOpis();	
    // cout << "Dane:" << star.getName()<< " " << star.getID() << endl;	
    star.printDane();
}