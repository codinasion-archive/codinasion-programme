#include <iostream>
using namespace std;

int Vol_cube(int s){
  int Vol = s*s*s;
  return Vol;
}

int main(){
  int side;
  cout<<"Enter cube side :"<<endl;
  cin>>side;
  cout<<"Volume:"<<Vol_cube(side);
  return 0;
}
