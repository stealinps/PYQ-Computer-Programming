#include <iostream>
using namespace std;
void triangle(int r){
  int i,j;
  for(i=0;i<r;i++){
    for(j=0;j<=i;j++){
      cout <<"*";
    }
    cout<<"\n";
  }
}
int main(){
  int row;
  cout <<"Enter row:";
  cin>>row;
  triangle(row);
}
