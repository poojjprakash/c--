#include<iostream>
using namespace std;
int extraBoxes(int a);
int extraBoxes(int a){
    return a/10;
}
int main(){
    int num;
    cout<<"Enter the number of orders :"<<endl;
    cin>>num;
    if(num>=10){
        cout<<extraBoxes(num);
    }
    else{
        cout<<num;
    }
}