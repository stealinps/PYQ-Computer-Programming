#include <iostream>
using namespace std;
int main() {
    int student, male=0, female=0;
    char gender;
    cout << "Enter total number of students in class : ";
    cin >> student;
    for (int i = 0; i < student; i++) {
        cout << "Choose M for Male or F for Female ";
        cin >> gender;
        if (gender == 'M') {
            male++;
        }
        else if (gender == 'F') {
            female++;
        }
        else {
            i--;
            cout << "Invalid gender try again\n";
        }
    }
    cout << "***************************************\n\n";
    cout << "Total number of Male : " << male;
    cout << "\nTotal number of Female : " << female;
}
