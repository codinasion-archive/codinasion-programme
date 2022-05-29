#include <iostream>

using namespace std;

int main(){
    int N, num;
    cin >> N;
    cout<<"Enter "<<N<<" Numbers" <<endl;
    int sum = 0;
    for(int i=0; i<N; i++){
        cin>>num;
        sum += num;
    }
    cout<<"Average is "<< (sum * 1.0)/N<<endl;;
}
