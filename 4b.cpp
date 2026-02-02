#include <iostream>
using namespace std;
void totalPoint(int game[],int num);
int main(){
  int num;
  cout <<"Enter number of game:";
  cin>>num;
  int game[num];
  for(int s=1;s<=num;s++){
    cout<<"Enter point for game "<<s<<" : ";
    cin >>game[s-1];
  }
  totalPoint(game,num);
}
void totalPoint(int game[],int num){
  int total=0;
  for(int i=0;i<num;i++){
    total=total+game[i];
  }
  cout <<"\n\nThe total point: "<<total;
}
