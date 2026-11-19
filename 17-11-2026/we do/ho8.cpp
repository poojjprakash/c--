#include<iostream>
using namespace std;
int previewBalance(int balance,int cost);
int previewBalance(int balance, int cost){
    return balance-cost;

}
int main(){
    int balance,pur;
    cout<<"Enter the balance amount : "<<endl;
    cin>>balance;
    cout<<"Enter the purchase cost : "<<endl;
    cin>>pur;
    cout<<balance<<"     ";
    cout<<previewBalance(balance,pur)<<endl;

}