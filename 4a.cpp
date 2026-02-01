#include <iostream>
using namespace std;
int main() {
    double BMI[5];
    int i;
    for (i = 0; i < 5; i++) {
        cout << "Enter user's BMI : ";
        cin >> BMI[i];
    }
    double totalBMI = 0;
    int overweight = 0, underweight = 0;
    for (i = 0; i < 5; i++) {
        totalBMI = totalBMI + BMI[i];
        if (BMI[i] > 25) {
            overweight++;
        }
        else if (BMI[i] < 18) {
            underweight++;
        }
    }
    double average = (double)totalBMI / 5;
    cout << "\nThe average BMI : " << average;
    cout << "\nTotal overweight : " << overweight;
    cout << "\nTotal ideal weight : " << (5 - overweight - underweight);
    cout << "\nTotal underweight : " << underweight;
}
