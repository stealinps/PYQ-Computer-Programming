#include <iostream>
#include <string>
using namespace std;
int main(){
  char session;
  float rate,hours,income;
  cout <<"Enter total hours working:";
  cin >> hours;
  cout <<"Enter session (M for Morning/A for Afternoon/N for Night):";
  cin >> session;
  switch(session){
    case 'M':
      rate=5.00;
      break;
    case 'A':
      rate=6.00;
      break;
    case 'N':
      rate=8.50;
      break;
    default:
      cout <<"Invalid session";
  }
  income=rate*hours;
  cout <<"RM"<<income;
}
