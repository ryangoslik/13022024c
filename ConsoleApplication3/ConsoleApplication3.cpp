#include <iostream>
using namespace std;

    class Dodawanie {
    public:
        int liczba1;
        int liczba2;
        int oblicz() {
            return this->liczba1 + this->liczba2;
        };
    };
    class Odejmowanie {
    public:
        int liczba1;
        int liczba2;
        int oblicz() {
            return this->liczba1 - this->liczba2;
    };
    class Mnożenie {
    public:
        int liczba1;
        int liczba2;
        int oblicz() {
            return this->liczba1 * this->liczba2;
    };
    
        int main()
        {

            int a, b;
            setlocale(LC_ALL, "");
            cout << "Podaj a = "; cin >> a;
            cout << "Podaj b = "; cin >> b;

            Dodawanie dodawanie;
            dodawanie.liczba1 = a;
            dodawanie.liczba2 = b;
            cout << "wynik dodawania = " << dodawanie.oblicz() << endl;
            Odejmowanie odejmowanie;
            odejmowanie.liczba1 = a;
            odejmowanie.liczba2 = b;

            Mnożenie mnozenie;
            mnozenie.liczba1 = a;
            mnozenie.liczba2 = b;

            

            

         }
      