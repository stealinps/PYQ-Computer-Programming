#include <iostream>
using namespace std;
int main(){
  const int verticle=3;
  const int horizontal=3;
  int m1[verticle][horizontal];
  int m2[verticle][horizontal];
  int m3[verticle][horizontal];
  int i,j;
  for(i=0;i<verticle;i++){
    for(j=0;j<horizontal;j++){
      cout <<"Enter element ["<<i<<"]["<<j<<"]:";
      cin >>m1[i][j];
    }
  }
  for(i=0;i<verticle;i++){
    for(j=0;j<horizontal;j++){
      cout <<"Enter element ["<<i<<"]["<<j<<"]:";
      cin >>m2[i][j];
    }
  }
  for(i=0;i<verticle;i++){
    for(j=0;j<horizontal;j++){
      m3[i][j]=m1[i][j]+m2[i][j];
      cout <<m3[i][j]<<" ";
    }
    cout <<"\n";
  }
}
