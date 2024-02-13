#include <iostream>
using namespace std;

class Maszyna {
public:
    string name;
    int serial_number;
    int digit;
    string przeznaczenie;
    string color;
 

    void runMaszyna() {
        if (digit == 1) {
            showMaszyna();

        }
        else {
                messages();
           }
      
     }
    
    void showMaszyna() {
        cout << "maszyna uruchomiona nr - " << serial_number << " Nazwa: " << name <<" Kolor: " << color <<" Przeznaczenie debeka : " << przeznaczenie << endl;
    }
    void messages() {
        cout << "Machinen zerstort : (" << endl;
    }
};
int main()
{
    int uruchomienie;
    cout << "Machinen - Start ... Jaki kolor jest machina destrukcji? 1 - blaufarben mit Goldfarben oder 2 Schwarz - " << endl;
    cout << "Co chcesz zrobic: "; cin >> uruchomienie;
    cout << "--------------------------------------------" << endl;
    Maszyna machen;
    machen.digit = uruchomienie;
    machen.name = "DB-1";
    machen.serial_number = 1234973552;
    machen.color = "Blaufarben mit Goldenfarben";
    machen.przeznaczenie = "Egzekucja";
    machen.runMaszyna();
    return EXIT_SUCCESS;
}
