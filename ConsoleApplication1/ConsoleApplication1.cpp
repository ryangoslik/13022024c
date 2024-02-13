#include <iostream>
using namespace std;

class Robot {
public:
    string name;
    int serial_number;
    int digit;
    
    void runRobot() {
        if (digit == 1) {
            showRobot();

        }
        else {
            messages();
        }
    }
    void showRobot() {
        cout << "Robot uruchomiony: nr - " << serial_number << " Nazwa: " << name << endl;
    }
    void messages() {
        cout << "Robot nie uruchomiony" << endl;
    }
};
int main()
{
    int uruchomienie;
    cout << "Robot 1 - Start inna wartość: Robot nie działa" << endl;
    cout << "Co chcesz zrobić: "; cin >> uruchomienie;
    cout << "--------------------------------------------" << endl;
    Robot mojrobocik;
    mojrobocik.digit = uruchomienie;
    mojrobocik.serial_number = 1234973552;
    mojrobocik.name = "DB-1";
    mojrobocik.runRobot();
}
