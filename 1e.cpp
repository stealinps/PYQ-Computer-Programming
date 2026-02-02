#include <iostream>
#include <string>
using namespace std;
struct Student{
  string matric;
  int year;
};
int main(){
  Student student;
  cout <<"Enter student matric number ";
  cin>>student.matric;
  cout<<"Enter student year of study ";
  cin>>student.year;
  cout<<"Student "<<student.matric<<" is a "<<student.year<<" year student";
}
