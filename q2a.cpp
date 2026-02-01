#include <iostream>
using namespace std;
struct STUDENT {
    char matric_no[12];
    double marks;
};

int main() {
    STUDENT BERR;
    cout << "Enter matric number and marks:\n";
    cin >> BERR.matric_no;
    cin >> BERR.marks;
    if (BERR.marks > 40) {
        cout << "PASS";
    }
    else {
        cout << "FAIL";
    }
}
