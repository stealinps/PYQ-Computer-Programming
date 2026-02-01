#include <iostream>
using namespace std;
int main() {
    int numberR;
    double totalresistance = 0;
    cout << "Enter number of resistors in series circuit : ";
    cin >> numberR;
    double resistor;
    for (int i = 0; i < numberR; i++) {
        cout << "Enter resistance value for resistor " << (i + 1) << " in ohm : ";
        cin >> resistor;
        totalresistance = totalresistance + resistor;
    }
    cout << "**********************************************************\n";
    cout << "The total resistance in series circuit : " << totalresistance << " ohm\n";
    double amp = 12 / totalresistance;
    cout << "The current in series circuit with voltage output 12V :" << amp << " A";
}
