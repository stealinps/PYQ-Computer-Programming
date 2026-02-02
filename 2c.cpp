#include <iostream>
using namespace std;
int main() {
    char choice;
    cout << "Enter choice ";
    cin >> choice;;
    switch (choice) {
    case 'Q':
    case 'q':
        cout << "Quick wash" << endl;
        break;
    case 'N':
    case 'n':
        cout << "Normal wash" << endl;
        break;
    case 'D':
    case 'd':
        cout << "Delicate" << endl;
        break;
    default:
        cout << "Exit" << endl;
    }
}
