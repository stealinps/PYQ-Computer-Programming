#include <fstream>
#include <iostream>
#include <cstdlib>
#include <iomanip>
using namespace std;
int main(){
  string name,matrix,cgpa;
  ifstream inputFile("student.txt", ios::in);
    if (!inputFile) {
        cerr << "File could not be opened \n";
        exit(1);
    }
  cout <<"Name:    Matrix ID:    CGPA:\n";
  while (inputFile >> name >> matrix >> cgpa){
    cout <<name<<" "<<matrix<<" "<<cgpa<<"\n";
  }
  inputFile.close();
  
}
