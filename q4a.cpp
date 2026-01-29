#include <fstream>
#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <string>
using namespace std;

struct studentData {
    string name;
    string matrix;
    string cgpa;
};

int main() {
    studentData data;
    ifstream inputFile("student.txt", ios::in);
    if (!inputFile) {
        cerr << "File could not be opened \n";
        exit(1);
    }
    cout << "Name:    Matrix ID:    CGPA:\n";
    while (inputFile >> data.name >> data.matrix >> data.cgpa) {
        cout << data.name << " " << data.matrix << " " << data.cgpa << "\n";
    }
    inputFile.close();

}
