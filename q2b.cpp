#include <iostream>
using namespace std;
int main() {
    int income;
    int dependants;
    cout << "Enter total monthly household income : RM ";
    cin >> income;
    cout << "Enter number of dependants : ";
    cin >> dependants;
    for (int i = 0; i < 25; i++) {
        cout << "#";
    }
    cout << "\n";
    if (income > 10000) {
        cout << "Monthly income exceed the minimum";
    }
    else if (dependants >= 3) {
        cout << "Your application is accepted and will be processed";
    }
    else {
        cout << "You are not eligible for scholarship";
    }
}
