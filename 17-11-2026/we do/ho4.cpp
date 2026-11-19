#include<iostream>
using namespace std;
void showSeat(int a);
void showSeat(int a){
    int seat=a;
    cout<<seat;
}
int main(){
    int row;
    cout<<"Enter the row count: "<<endl;
    cin>>row;
    showSeat(row);
}